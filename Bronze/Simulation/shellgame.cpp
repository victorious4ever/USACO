// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
	void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
int main() {
    setIO("shell");
	bool pebble = true;
    vector<int>values = {0,1,2,3};
    int n;
    cin >> n;
    vector<tuple<int,int,int>> swaps;
    for(int i = 0; i < n; i++){
        int a,b,g;
        cin >> a >> b >> g;
        swaps.push_back(make_tuple(a, b, g));
    }
   
    int ans = 0;
    int skib = 0;
      for(int i = 1; i <= n; i++){
        values[i] *= 10;
        for(const auto&t : swaps){
            int a = get<0>(t), b = get<1>(t), g = get<2>(t);
          
            swap(values[a], values[b]);
            
            
            if(values[g] % 10 == 0){
                    ans++;
                }
            }
            skib = max(ans, skib);
            ans = 0;
           for(int i = 0; i < n;i++){
            if(values[i] % 10 == 0){
                values[i] /= 10;
            }
           }
      }
            cout << skib << endl;
    
    }
    

