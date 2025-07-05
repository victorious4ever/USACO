// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
	void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
int main() {
    setIO("blocks");
	unordered_map<char, int> counts;
    for (char c = 'a'; c <= 'z'; ++c) {
        counts[c] = 0;  // Initialize each key with value 0
    }
    unordered_map<char, int> counts2;
     for (char c = 'a'; c <= 'z'; ++c) {
        counts2[c] = 0;  // Initialize each key with value 0
    }
 


    int n;
    cin >> n;
    unordered_map<char,int> final;
    for(int i = 0; i < n; i++){
        int skibidi = 0;
        
        string first, second = "";
        cin >> first >> second;
        int x = first.length();
        int y = second.length();
        for(int j = 0; j < x; j++){
        counts[first[j]]++;
        }
        for(int c = 0; c < y; c++){
        counts2[second[c]]++;
        }

        for (char d = 'a'; d <= 'z'; d++){
            final[d] += max(counts[d], counts2[d]);
            counts[d] = 0;
            counts2[d] = 0;
        }
        
        
    }
     for (char d = 'a'; d <= 'z'; d++){
            cout << final[d] << endl;
        }
}
