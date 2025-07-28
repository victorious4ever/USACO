// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    vector<pair<int,string>> milk;
    for(int i = 0; i < n; i++){
        string a;
        int b;
        cin >> a >> b;
        milk.push_back(make_pair(a,b));
    }
    map<int,string> rank;
    for(int i = 0; i < n; i++){
        rank[milk[i].first] += milk[i].second;

    }
    for(int i = 0; i < n; i++){
        cout << rank[milk[i].first] << endl;
    }
    
        int duh = 0;
    for(int i = 0; i < n; i++){
        duh = rank[milk[i].first];
        if(duh > rank[milk[i].first]){
            duh = rank[milk[i].first];
        
            if(rank[milk[i + 1].first] == duh){
                cout << "Tie" << endl;
                break;
            }
            else{
                cout << milk[i].first << endl;
                break;
            }
    
        }


    }
}
