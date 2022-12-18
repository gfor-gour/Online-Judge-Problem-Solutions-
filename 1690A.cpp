#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> n;
            if(n%3 == 0){
                a = b = c = (n-3)/3;
                a +=1;
                b +=2;
            }
            else if(n%3 == 1){
                a = b = c = (n-4)/3;
                a +=1;
                b +=3;
            }
            else if(n%3 == 2){
                a = b = c = (n-5)/3;
                a +=2;
                b +=3;
            }
            cout << a << " " << b << " " << c <<endl;
    }


}