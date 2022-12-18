#include<bits/stdc++.h>
using namespace std;

int main(){
    double n,a,s=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        s += a;
    }
    double x = s/n;
    cout << x << endl;
}