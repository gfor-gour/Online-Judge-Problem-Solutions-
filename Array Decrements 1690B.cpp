#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t,n,x;
        cin>> t;
        while (t--){   
            int f = 0,x = 0;
            cin>> n;
            int a[n];
            int b[n];
            for(int i=0;i<n;i++){
                cin >> a[i];
            }
            for(int i=0;i<n;i++){
                cin >> b[i];
            } 
 
            if(n>1){
                for(int i=0;i<n;i++){
                        if(a[i] != 0 && a[i]-b[i]>x)
                            x = a[i] - b[i];
                }
                    
                for(int i=0;i<n;i++){
 
                if(x==0){
                    if(a[i] != b[i]){
                        f = 1; 
                        break;
                    }
                }
 
                else if((b[i] == 0 && x < a[i]) || (a[i]<b[i] ) || (a[i]-b[i] != x && b[i] > 0)){
                    f = 1;
                    break;
                }
            }
                if(f==0)
                        cout<< "YES" << endl;
                else
                        cout<< "NO" << endl;
            }
 
            else if(n==1){
                    if(a[0]>=b[0])
                        cout<< "YES" << endl;
                    else
                        cout<< "NO" << endl;
            }
    }
        return 0;
 
}
