#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m,a,s,x,y;
    cin >>n >> m >> a;
        if(n==m && n%a == 0){
            x = n/a;
            cout << x*x << endl;
        }
        else if(n==m && n%a != 0){
            x = n/a +1;
            cout << x*x << endl;
        }
        else if(n%a == 0 && m%a == 0){
            s = (n/a)*(m/a);
            cout << s << endl;
            
        }
        else if(n%a !=0 && m%a !=0){
            x = n/a +1;
            y = m/a +1;
            s = x*y;
            cout << s << endl;
        }
        else if(n%a !=0 && m%a ==0){
            x = n/a +1;
            s = x*(m/a);
            cout << s << endl;
        }
        else if(n%a ==0 && m%a !=0){
            y = m/a +1;
            
            s = (n/a)*y;
            cout << s << endl;
        }

}