#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(9);
    for (int i = 0; i < 9; ++i) cin >> v[i];

    for (int i = 0; i < 9; ++i) {
        for (int j = i + 1; j < 9; ++j) {
            int sum = 0;
            for (int k = 0; k < 9; ++k) {
                if (k != i && k != j) sum += v[k];
            }

            if (sum == 100) {
                vector<int> ans;
                for (int k = 0; k < 9; ++k) {
                    if (k != i && k != j) ans.push_back(v[k]);
                }
                sort(ans.begin(), ans.end());
                for (int x : ans) cout << x << '\n';
                return 0;
            }
        }
    }
    return 0;
}
