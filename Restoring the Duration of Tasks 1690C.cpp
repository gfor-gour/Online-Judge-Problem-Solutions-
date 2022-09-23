#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t,n;
    cin>> t;
        while(t--){
            cin>> n;
            int s[n],f[n],d[n];
 
            for(int i=0;i<n;i++){
                cin >> s[i];
            }
            for(int i=0;i<n;i++){
                cin >> f[i];
            } 
            
                for(int i=0;i<n;i++){
                    if(i==0)
                        d[0] = f[0] - s[0];
                    else{
                        if(f[i-1]>s[i]){
                            d[i] = f[i] - f[i-1];
                        }
                        else
                            d[i] = f[i] - s[i];
                    }
 
            }
 
            for(int i=0;i<n;i++){
                cout << d[i] << " ";
            }
            cout << endl;
        }
 
}
