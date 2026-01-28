#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    for (int i = 0; i < (int)s.size(); i++) {
        if (('a' <= s[i] && s[i] <= 'm') || ('A' <= s[i] && s[i] <= 'M')) {
            s[i] = s[i] + 13;
        }else if (('n' <= s[i] && s[i] <= 'z') || ('N' <= s[i] && s[i] <= 'Z')) {
            s[i] = s[i] - 13;
        }
        
    }

    cout << s;
    return 0;
}
