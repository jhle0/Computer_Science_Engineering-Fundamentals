#include<bits/stdc++.h>
using namespace std;

void josephus(int n, int k){
    list<int> circle;
    for(int i = 1; i < n+1 ; ++i) circle.push_back(i);
    
    list<int>::iterator kill = circle.begin();
    vector<int> survivors;

    while(!circle.empty()){
        for(int i = 0; i < k-1; ++i){
            ++kill;
            if(kill == circle.end()) kill = circle.begin();
        }
        
        survivors.push_back(*kill);
        kill = circle.erase(kill);
        if(kill == circle.end()) kill = circle.begin();
    }
    cout << "<";
    for (int x : survivors) {
        if (x != survivors.front()) cout << ", ";
        cout << x;
    }
    cout << ">\n";
}

int main(){
    int n, k;
    cin >> n >> k;
    josephus(n, k);

    return 0;
}


