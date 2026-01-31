#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string pattern;
    cin >> N >> pattern;

    int star = pattern.find('*');
    string pre = pattern.substr(0, star);
    string suf = pattern.substr(star + 1);

    for (int i = 0; i < N; i++) {
        string file;
        cin >> file;

        if ((int)file.size() < (int)pre.size() + (int)suf.size()) {
            cout << "NE\n";
            continue;
        }

        bool ok_pre = (file.substr(0, pre.size()) == pre);
        bool ok_suf = (file.substr(file.size() - suf.size()) == suf);

        cout << (ok_pre && ok_suf ? "DA\n" : "NE\n");
    }
}
