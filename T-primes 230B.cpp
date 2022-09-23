#include<bits/stdc++.h>
using namespace std;
 
int square(long long n){
        double sqrt_n = sqrt(n);
 
        if(sqrt_n == int(sqrt_n)){
            return 1;
        }
        else
            return 0;
}
 
int main(){
    int z = 1000000;
    bool prime[1000000];
        memset(prime,true,sizeof(prime));
        prime[0] = false;
        prime[1] = false;
        int i,j;
 
    for(i=2;i*i<=z;i++){
        if((prime[i])){
            for(int j=i*i;j<=z;j+=i){
                prime[j] = false;
            }
        }
    }
    long long n,t;
    cin>> t;
        while(t--)
        {
            cin >> n;
            if(n==4){
                cout << "YES" << endl;
            }
            else if(square(n) == 1 && prime[int(sqrt(n))] == true){
                cout <<"YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        
 
}
