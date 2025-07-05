// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <type_traits>
using namespace std;

int main() {
	int n;
    cin >> n;
      int ans = 1000;
    vector<pair<char,int>> skibidi(n);
   	for (auto &[dir, num_steps] : skibidi) { cin >> dir >> num_steps; }
    pair<int, int> curr{0,0};
    int time = 0;
      map<pair<int, int>, int> map;
    for(const auto &[dir, num_steps] : skibidi){
        pair<int, int> delta;
        if(dir == 'N'){
            delta = pair<int,int>{0,1};
        }
        if(dir == 'S'){
            delta = pair<int,int>{0, -1};
        }
        if(dir == 'E'){
            delta = pair<int,int>{1,0};
        }
        if(dir == 'W'){
            delta = pair<int,int>{-1,0};
        }
        
      
      
        for(int i = 0; i < num_steps; i++){
            curr = pair<int,int>{delta.first+curr.first, delta.second+curr.second};
            time++;
            
            if(map.count(curr)){
                ans = min(ans, time - map[curr]);
            }
            map[curr] = time;
        }
    }
    cout << ans << endl;
    


        
}

