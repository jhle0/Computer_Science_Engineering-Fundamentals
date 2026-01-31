#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);

    string s;
    cin >> s;

    map<char, int> cnt;
    for(char c : s) cnt[c]++;

    string half;
    int oddCnt = 0;
    char odd;

    for(auto p : cnt){
        if(p.second % 2 == 1){
            odd = p.first;
            oddCnt++;
            if(oddCnt > 1){
                cout << "I'm Sorry Hansoo";
                return 0;
            }
        }
        half.append(p.second/2, p.first);
    }

    string rev = half;
    reverse(rev.begin(), rev.end());
    string ans = half;
    if(oddCnt == 1) ans += odd;
    ans += rev;

    cout << ans;
    
    return 0;
}
