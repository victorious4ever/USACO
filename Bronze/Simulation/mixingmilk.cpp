// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;
	void setIO(string s) {
	freopen((s + ".in").c_str(), "r", stdin);
	freopen((s + ".out").c_str(), "w", stdout);
}
int main() { 
    setIO("mixmilk");
	int c1, m1, c2,m2,c3,m3;
    cin >> c1 >> m1;
    cin >> c2 >> m2;
    cin >> c3 >> m3;
    int i = 0;
        while(i <= 32){
        if(m1 + m2 <= c2){
            m2 += m1;
            m1 = 0;
            
            
        }
        else if(m1 + m2 > c2){
              m1 -= (c2 - m2);
              m2 += (c2 - m2);
        }

         if(m2 + m3 <= c3){
            m3 += m2;
            m2 = 0;
            
        }
         else if(m2 + m3 > c3){
              m2 -= (c3 - m3);
              m3 += (c3 - m3);
        }
            if(m3 + m1 <= c1){
            m1 += m3;
            m3 = 0;
            
        }
            else if(m3 + m1 > c1){
              m3 -= (c1 - m1);
              m1 += (c1 - m1);
        }
        
        
        i++;

        }
         if(m1 + m2 <= c2){
            m2 += m1;
            m1 = 0;
            
            
        }
        cout << m1 << endl;
        cout << m2 << endl;
        cout << m3 << endl;

}

    
      


