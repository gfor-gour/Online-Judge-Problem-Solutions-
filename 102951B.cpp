#include<bits/stdc++.h>
using namespace std ;

int main(){
        int n,x,sum=0,c=0;
        cin >> n >> x;
        vector <int> g;

            for(int i=0;i<n;i++){
                int x; 
                cin >> x;
                g.push_back(x);
                
            }
        sort(g.begin(),g.end());
            int j =0;
            while(sum <= x){
                sum += g[j];
                j++;
                if(sum > x){    
                    break;
                } 
                c++;   
                if(c == n ){    
                    break;
                }          
            }
            cout << c << endl;
    

}
