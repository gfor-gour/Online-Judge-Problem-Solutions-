#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r=1,c=0,f=0;
    cin >> n;
    while(n){
        r = n%10;
        if(r==1){
            n = n/10;
            c =0;
        }
            
        else if(r==4){
            c++;
            n = n/10;
            if(c==3 || n==0){
                f = 69;
                break;
            } 
        }
        else{
            f = 69;
            break;
        }
    }
    if(f==0)    cout << "YES" << endl;
    else    cout << "NO" << endl;
}