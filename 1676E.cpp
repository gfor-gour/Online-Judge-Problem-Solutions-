#include<bits/stdc++.h>
using namespace std;

int main(){
        int t,l,n;
        cin >> t ;
        while(t--){
            cin >> n >> l;
            vector<long> go(n);
            long long int sum = 0;
            for(long i=0;i<n;i++){
                int r;
                cin >> r;
                go.push_back(r);
            }
            sort(go.begin(),go.end(), greater<int>());

            for(int i=1;i<n;i++){
                go[i] += go[i-1];
            }


        while(l--){
            long long a,left(0),right(n-1);
            cin >> a;
            if(a>go[n-1]){
                cout << -1 << endl;
                    continue;
            }
            long cn=0;
            while(left<=right){
                long mid = (left+right)/2;
                    if(a<=go[mid]){
                        cn = mid+1;
                        right = mid - 1;
                    }
                    else
                        left = mid + 1;
            }
            cout << cn << endl;

        }
    }
}