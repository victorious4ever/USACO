// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
	void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
int main() {
    setIO("cownomics");
    int n,m;
    cin >> n >> m;
    vector<vector<char>> spot(n, vector<char>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) { cin >> spot[i][j]; }
	}

	vector<vector<char>> clean(n, vector<char>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) { cin >> clean[i][j]; }
	}
       
    int ans = 0;
    for(int j = 0; j < m; j++){
        bool real = true;
        for(int i = 0; i < n; i++){
            
            for(int c = 0; c < n; c++){
                 
                if(spot[i][j] == clean[c][j]){
                  
                    real = false;
                    break;    

                }
                

                
                
            }
            if(!real){
                real = true;
                break;
            }
            
            if(real && i == n - 1){
             
                ans++;
            }
        }
    }
    cout << ans << endl;
}
