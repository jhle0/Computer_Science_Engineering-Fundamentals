#include <bits/stdc++.h>
using namespace std;  

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    string s;
    cin >> s;
    int n;
    n = s.size() - 1;
    
    int i = 0;
    while(i < n-i){
        if(s[i] != s[n-i]){
            cout << 0;
            exit(0);
        }
        i++;
    }
    cout << 1;

    return 0;
}
