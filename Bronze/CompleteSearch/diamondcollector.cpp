// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
	void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
int main() {
    setIO("diamond");
	int n,k;
    cin >> n >> k;
    vector<int> diamond(n);
    for(int i = 0; i < n; i++){
        cin >> diamond[i];
    }
    sort(diamond.begin(), diamond.end());
    int ans = 0;

        
        for(int j = 0; j < n; j++){
            int hey = 0;
            for(int c = j; c < n; c++){
                if(abs(diamond[c] - diamond[j]) <= k){
                    hey++;
                                
               ans = max(hey,ans);
                }

                else{
                    hey = 0;
                    break;
        
                    
                }
               
            }

        }
      cout << ans << endl;
    }
   
