// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
	void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
int main() {
    setIO("gymnastics");
	int k,n;
    cin >> k >> n;
     std::vector<std::vector<int>> place(k, std::vector<int>(n));
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            cin >> place[i][j];
        }
    }

    bool real = true;
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int b = i; b < n; b++ )
        for(int c = 0; c < k; c++){
                if(b == i){
                    break;
                }
            for(int j = 0; j < n; j++){
                if(b == i){
                    break;
                }
                
                if(place[0][b] == place[c][j]){
                   
                    real = false;
                    break;
                }
                if(place[0][i] == place[c][j]){
                   
                    break;
                }
            }
            if(!real){
                real = true;
                break;
            }
            if(real && c == k - 1){
              
                ans++;
            }
    }
}
cout << ans << endl;
}
