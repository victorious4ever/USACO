// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
	void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
int main() {
    
    int n;
    cin >> n;
	//* for the front
    vector<string> sensor(n);
    vector<int> lowerboundary(n);
    vector<int> upperboundary(n);
    for(int i = 0; i < n; i++){
        cin >> sensor[i] >> lowerboundary[i] >> upperboundary[i];
    }
    // start off with getting the incoming traffic correctly
    
    int higher = 0;
    int lower = 0;
    for(int i = 0; i < n; i++){
        if(sensor[0] == "none"){
            cout << lowerboundary[i] << " " << upperboundary[i] << endl;
            break;
        }
        else{
            if(sensor[i] == "on"){
                
                higher -= upperboundary[i];
            }
            if(sensor[i] == "off"){
                    lower -=  upperboundary[i];
           
            }
            if(sensor[i] == "none"){
                
                cout << (lowerboundary[i] + lower) << " " << (upperboundary[i] + higher) << endl;
                
                break;
            }
        }
    }

    int lower_bound = 0;
    int upper_bound = 0;
    bool real = false;
    for(int i = 0; i < n; i++){
        if(sensor[i] == "none" && !real){
            lower_bound = lowerboundary[i];
            upper_bound = upperboundary[i];
            real = true;
        }
        if(sensor[i] == "none" && real){
            if(lower_bound < lowerboundary[i]){
                lower_bound = lowerboundary[i];
            if(upper_bound > upperboundary[i]){
                upper_bound = upperboundary[i];
            }
            }
        }
        if(sensor[i] == "off" && real){
             lower_bound -= lowerboundary[i];
             upper_bound -= upperboundary[i];
        
        }
        if(sensor[i] == "on" && real){
             lower_bound += upperboundary[i];
             upper_bound += lowerboundary[i];
        
        }

    }
  

    cout << lower_bound << " " << upper_bound << endl;

    return 0;
    
}
