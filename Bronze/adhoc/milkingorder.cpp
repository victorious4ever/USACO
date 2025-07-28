// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
	void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
int main() {
    
	int n,m,k;
    cin >> n >> m >> k;
    vector<int> pos(10000);
    vector<int> hi(n);
    for(int i = 0; i < m; i++){
        cin >> hi[i];
    }
    for(int i = 0; i < k; i++){
        int a,b;
        cin >> a >> b;
        b--;
        pos[b] = a;
    }
   
    int start = 0;
    bool hey = true;
    for(int i = 0; i < n; i++){
        if(pos[i] == 0){
        for(int j = 0; j < n; j++){
            if(pos[j] == hi[start]){
                hey = false;
                break;
            }
        }
        if(hey){
            pos[i] = hi[start];
            start++;
        }
        else{
            start++;
            hey = true;
        }

    }
    }
    int sigma = 0;
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(hi[j] == 1){
                safe = true;
                sigma = hi[j-1];
                break;
            }


        }
        if(sigma == pos[i]){
            safe  = true;
            cout << "real";
            continue;
        }
        if(safe && pos[i] == 0){
            cout << i + 1 << endl;
        }
    }
}
