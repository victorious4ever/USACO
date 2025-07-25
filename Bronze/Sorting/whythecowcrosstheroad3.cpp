// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
	void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
int main() {
    setIO("cowqueue");
	vector<pair<int,int>> cows;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        cows.push_back(make_pair(a,b));
    }
    int time = 0;
    sort(cows.begin(), cows.end());
    for(int i = 0; i < n; i++){
        if(i == 0){
            time += cows[i].first;
            time += cows[i].second;
            continue;
        }
        if(time < cows[i].first){
            time = cows[i].first;
            time += cows[i].second;
        }
        else if(time >= cows[i].first){
            time += cows[i].second;
        }
    }
    cout << time << endl;
}
