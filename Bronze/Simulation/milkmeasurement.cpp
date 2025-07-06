// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
	void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
int main() {
    setIO("measurement");
	int n;
    cin >> n;
    vector<tuple<int,string,int>> log;
    int bessie = 7;
    int mildred = 7;
    int elsie = 7;
    
    pair<int, string> winner;
    pair<int, string> lastwinner;
    for(int i = 0; i < n; i++){
        int a;
        int b;
        string c;
        cin >> a >> c >> b;
        log.push_back(make_tuple(a, c, b));
    }
    int ans = 1;
    sort(log.begin(), log.end());

    for(auto logs : log){
  
        if(get<1>(logs) == "Mildred"){
            mildred += get<2>(logs);
        }
         if(get<1>(logs) == "Bessie"){
            bessie += get<2>(logs);
        }
        if(get<1>(logs) == "Elsie"){
            elsie += get<2>(logs);
        }
        if(mildred > bessie && mildred > elsie){
            winner = {mildred, "Mildred"};
        }
         if(elsie > mildred && elsie > bessie){
            winner = {elsie, "Elsie"};
        }
         if(bessie > mildred && bessie > elsie){
            winner = {bessie, "Bessie"};
        }
      
        
            if(bessie == mildred && bessie > elsie){
                winner = {bessie, "BessieMildred"};
            }
            if(bessie == elsie && bessie > mildred){
                winner = {bessie, "BessieElsie"};
            }
            if(mildred == elsie && mildred > bessie){
                winner = {mildred, "MildredElsie"};
            }
            if(mildred == elsie && elsie == bessie){
                winner = {mildred, "MildredBessieElsie"};
            }
              if(get<2>(logs) < 0 && lastwinner.first + get<2>(logs) == winner.first){
            
            lastwinner.first += get<2>(logs);
        }

        
        if (lastwinner == make_pair(0, string(""))) {
            lastwinner = winner;
            continue;
}
        else if(winner.second == lastwinner.second && winner.first >= lastwinner.first){
            lastwinner.first = winner.first;
        }
        else if(winner.second != lastwinner.second && winner.first >= lastwinner.first){
           
            ans++;
            lastwinner.first = winner.first;
            lastwinner.second = winner.second;
        }
   
        winner = {};
    
              

    }
    cout << ans << endl;
}
