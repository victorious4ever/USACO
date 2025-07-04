// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
	void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("cowsignal");
    int m,n, k;
    cin >> m >> n >> k;
 
    
    for(int j = 0; j < m; j++){
        string og = "";
        cin >> og;
        string expanded = "";
        
        for(int i = 0; i < n; i++){
            for(int  c = 0; c < k; c++){
                expanded += og[i];
                
            }
           
        }
        
    
    
     for(int z = 0; z < k; z++){
                cout << expanded << endl;
            }
    
    }
    }

 
