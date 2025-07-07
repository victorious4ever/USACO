// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
	void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
int main() {
    setIO("pails");
	int x,y,m;
    cin >> x >> y >> m;
    int ans = 0;
    for(int i = 0; i < 1000; i++){
        int hey = 0;
         for(int j = 0; j < 10000; j++){
        if(x*j + y * i <= m){
            hey = x*j + y * i;
        }
        else{
            break;
        }
    }
    ans = max(hey,ans);
}
cout << ans << endl;
}
