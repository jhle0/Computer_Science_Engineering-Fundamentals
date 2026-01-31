#include <bits/stdc++.h>
using namespace std;

int main(){
		ios::sync_with_stdio(false); cin.tie(nullptr);
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    long long sum = 0;
    for(int i = 0; i < k; i++) sum += a[i];
    long long max_sum = sum;
    for(int i = k; i < n; i++){
        sum -= a[i-k];
        sum += a[i];
        if(sum > max_sum) max_sum = sum;
    }
    cout << max_sum;

    return 0;
}
