#include <bits/stdc++.h>
using namespace std;  
int cnt[101];

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;

    for(int i = 0; i < 3; i++){
        int in, out;
        cin >> in >> out;
        for(int t = in; t < out; t++) ++cnt[t];
    }
    long long total = 0;
    for(int i = 1; i < 100; i++){
        if(cnt[i] == 1) total += 1*a;
        else if(cnt[i] == 2) total += 2*b;
        else if(cnt[i] == 3) total += 3*c;
    }
    cout << total;
    
    
    return 0;
}
