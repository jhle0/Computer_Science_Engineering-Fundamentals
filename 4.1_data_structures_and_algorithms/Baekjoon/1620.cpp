#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    unordered_map<int, string> num2name;
    unordered_map<string, int> name2num;

    for(int i = 1; i < N+1; i++){
        string poke;
        cin >> poke;
        name2num[poke] = i;
        num2name[i] = poke;
    }
    for(int i = 0; i < M; i++){
        string q;
        cin >> q;
        if(isdigit(q[0])){
            int idx = stoi(q);
            cout << num2name[idx] << '\n';
        }else cout << name2num[q] << '\n';
        
    }

    return 0;
}
