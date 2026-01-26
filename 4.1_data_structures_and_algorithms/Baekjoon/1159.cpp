#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    map<char, int> mp;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        mp[s[0]]++;
    }

    bool ok = false;
    for (auto &p : mp) {
        if (p.second >= 5) {
            cout << p.first;
            ok = true;
        }
    }
    if (!ok) cout << "PREDAJA";
    cout << '\n';
    return 0;
}
