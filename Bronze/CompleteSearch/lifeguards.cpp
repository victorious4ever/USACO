// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
	void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    
    vector<int> time(10000, 0);
	int n;
    cin >> n;
    vector<pair<int, int>> guard;
    for(int i = 0; i < n; i++){
        int a,b;
        
        cin >> a >> b;
    
        guard.push_back(make_pair(a,b));
    }
    int a = 0;
    int real = 0;
    int ans = 0;
    
    for(int c = 0; c < n; c++){
        
        
        time.clear();
        
        for(int i = 0; i < n; i++){
             if(i == c){
                continue;
        }
        
            for(int j = guard[i].first; j < guard[i].second; j++){
                
                if(time[j] == 1){
                    continue;
                }
                else if(time[j] == 0){
                    time[j]++;
                    ans++;
                    
                    cout << c << " " <<  i << " " << j << endl;
                    
                }


        }
        real = max(ans, real);

    }
}
cout << real << endl;
}

