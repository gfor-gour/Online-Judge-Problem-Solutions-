#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        int j=1,k=1;
        cin >> n;
        string a,b;
        cin >> a >> b;
            for(int i=0;i<n;i++){
                if(a[j] == '0'){
                    j++;
                    k++;
                }
                else if(b[k] == '0'){
                    k++;
                    j++;
                }
            }
            
            if(k==n){
                    cout << "YES" << endl;
                }
            else{
                    cout << "NO" << endl;
        }
    }

}