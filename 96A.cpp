#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
        cin >> a;
    
        int c = 1;
        for(int i=1;i<= a.size(); i++){
            if(a[i]==a[i-1]){
                    c++;
                    if(c==7){
                        cout << "YES" << endl;
                        return 0;
                    }
            }
            else{
                c = 1;
            }
    }

            cout << "NO" << endl;
    }
    