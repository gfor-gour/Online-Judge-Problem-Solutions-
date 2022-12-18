#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string e,g;
        cin >> e >> g;
        int c = 0;
            for(int p=0;p<n;p++){
                //cout << e[p] << endl;
                if(g[p]=='0') continue;
                
                if(p>0 && e[p-1] == '1'){
                    e[p-1] = 'x';
                    c++;
                }
                else if(e[p] =='0'){
                    e[p] = 'x';
                    c++;
                    }

                else if(p+1<n && e[p+1] == '1'){
                    e[p+1] = 'x';
                    c++;
                }
            }
            cout << c << endl;
    }

}