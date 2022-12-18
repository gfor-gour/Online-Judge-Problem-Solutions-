#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(c<a || c<b){
        if(a>b){
            swap(a,c);
        }
        else
            swap(b,c);
    }

    if(c <= a+b-1){
        cout << 0 << endl;
    }
    else{
        cout << c - (a+b-1) << endl;
    }


}