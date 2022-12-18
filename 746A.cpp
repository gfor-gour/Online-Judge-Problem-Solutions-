#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(c>=4 && b>=2){
        while(2*a > b || 4*a > c){
            --a;
        }
        cout << 7*a << endl;
    }

    else{
        cout << 0 << endl;
    }

}