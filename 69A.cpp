#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k;
    int s[3] = {0,0,0};
        for(int r=0;r<n;r++){
            for(int c=0;c<3;c++){
                cin >> k;
                s[c] += k;
            }
        }
        int f = 0;
        for(int r=0;r<3;r++){
            if(s[r] != 0){
                f = 99;
                break;
            }
        }
        if(f==0 ){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;

}
