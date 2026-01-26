#include <bits/stdc++.h>
using namespace std;  

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int cnt[26] = {0};
    
    for(char c : s){
        cnt[c-'a']++;
    }
    for(int i : cnt) cout << i << " ";
    
    return 0;
}
