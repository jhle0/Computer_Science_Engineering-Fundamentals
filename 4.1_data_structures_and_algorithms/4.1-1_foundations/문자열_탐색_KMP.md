# 문자열 탐색 - KMP , suffix array

---

문자열은 거의 모든 컴퓨팅 작업의 기반이다

문서, 웹페이지, 이메일, 로그, 채팅 등은 모두 문자열이며, ctrl + F

같은 기능은 결국 **“텍스트에서 패턴을 찾는 문제”**로 귀결된다

- **KMP (Knuth–Morris–Pratt)**: 단일 패턴 검색을 빠르게 하는 알고리즘
- **Suffix Array(접미사 배열)**: 문자열 전반의 다양한 질의를 빠르게 처리하는 자료구조

## 문자열 검색

**텍스트(짚더미, haystack)** `H` 안에서 **패턴(바늘, needle)** `N`이 등장하는 모든 위치를 찾는다

- 입력: `H`, `N`
- 출력: `N`이 `H`의 부분 문자열로 등장하는 **시작 인덱스들**

ex) H = “hogwarts”, N = “gwart” 일 때

H[2…6] = N 이므로 → 시작 위치는 2

## 가장 간단한 방법(브루트포스)

N의 가능한 모든 시작 위치를 다 시도해 보는 것

- `begin = 0..n-m`에 대해:
    - `H[begin + j]`와 `N[j]`를 `j=0..m-1`까지 비교
    - 끝까지 맞으면 `begin`을 정답에 추가

### 장점

- 구현이 단순하다.
- 평균적으로는 꽤 빠르게 동작한다(대부분 일찍 불일치가 나서 비교가 빨리 끝남).

### 단점(최악 케이스)

특정 입력에서는 비교를 엄청 많이 한다.

예)

`H = "aaaaaaaaaa...."` (n개)

`N = "aaaaa....a"` (m개)

- 거의 모든 시작 위치에서 `m`개 비교가 끝까지 진행된다.
- 최악 시간복잡도: **O(n·m)**

> 이런 경우는 흔치 않고, 구현이 단순하다는 장점이 있다
> 
> 
> C의 strstr(), c++의 string::find(), JAVA의 indexOf() 등이 위 알고리즘을 사용
> 

---

## KMP 알고리즘

브루트포스는 한 번 실패하면 `begin+1`로 가서 **패턴을 처음부터 다시 비교**한다

KMP는 실패했을 때 **이미 맞았던 정보(접두사/접미사 구조)** 를 이용해 점프한다

### 핵심 관찰

어떤 위치에서 `matched` 글자까지 맞았고 그 다음에 실패했다면,

- 지금까지 맞았던 `N[0..matched-1]` 안에
- “앞부분(prefix)”과 “뒷부분(suffix)”이 겹치는 구조가 있을 수 있다

그 겹침 길이를 알면, **불가능한 시작 위치를 통째로 건너뛸 수 있다**

### 다음 시작 위치 찾기

KMP는 패턴 `N`에 대해 미리 배열 `pi`를 만든다.

> `pi[i]` = `N[0..i]`의 접두사(prefix)면서 접미사(suffix)인 문자열의 **최대 길이**
> 

예:

- `N[0..i]`의 끝부분이 `N`의 앞부분과 얼마나 겹치는지(가장 긴 것)

이 값이 있으면 검색 중 불일치가 나왔을 때,

- `matched`를 어디까지 줄여서 재시작할지(즉, **이미 맞은 것으로 인정할 길이**)를 알 수 있다

---

## kmp 알고리즘 구현

### 상태 변수

- `begin`: 현재 패턴을 맞춰보는 시작 위치
- `matched`: 현재까지 연속으로 맞은 글자 수

불변식:

- `H[begin .. begin+matched-1] == N[0 .. matched-1]`

### 불일치 처리(핵심 점프)

`matched > 0`에서 불일치가 나면:

- 다음 후보 시작 위치는
    
    `begin += matched - pi[matched-1]`
    
- 그리고 이미 `pi[matched-1]` 길이는 맞았다고 볼 수 있으므로
    
    `matched = pi[matched-1]`
    

즉, **처음부터 다시 비교하지 않고 이어서 비교한다**

```cpp
vector<int> KmpSearch(const string &H, const string &N){
    int n = H.size(); int m = N.size();
    vector<int> ret;
    vector<int> pi = getPartiaMatch(N);
    int begin = 0, matched = 0;
    while(begin <= n -m){
        if(matched < m && H[begin + matched] == N[matched]){
            ++matched;
            if(matched == m) ret.push_back(begin);
        }
        else{
            if(matched == 0)
                ++begin;
            else{
                begin += matched - pi[matched - 1];
                matched = pi[matched - 1];
            }
        }
    }
    return ret;
}
```

### 시간 복잡도

`begin`은 앞으로만 이동하고, `matched`는 `pi`를 따라 줄어들며 전체적으로 선형으로 묶인다.

- 텍스트 길이 `n = |H|`
- 패턴 길이 `m = |N|`

검색 단계 시간복잡도는 **O(n)**

(정확히는 `O(n+m)`에서 `m`은 pi 계산에 포함)

---

## 부분 일치 테이블 생성하기

### 목표

`pi[i] = N[0..i]`의 최대 prefix==suffix 길이

### 단순한 방법

각 접두사마다 가능한 길이를 전부 시도 → 비효율적(대략 `O(m^2)` 이상, 구현 방식에 따라 더 나쁨)

### KMP 방식으로 pi 계산

pi 자체도 KMP의 “점프” 로직으로 계산할 수 있다

- `N`에서 `N`을 찾는 과정처럼 진행하면서
- 일치가 늘어날 때마다 `pi` 값을 채운다
    
    → 시간 복잡도 `O(m)`
    

```cpp
vector<int> getPartialMatch(const string& N){
    int m = N.size();
    vector<int> pi(m, 0);
    int begin = 1, matched = 0;
    while(begin + matched < m){
        if(N[begin + matched] == N[matched]){
            ++matched;
            pi[begin + matched - 1] = matched;
        }
        else{
            if(matched == 0)
                ++begin;
            else{
                begin += matched - pi[matched - 1];
                matched = pi[matched - 1];
            }
        }
    }
    return pi;
}
```
