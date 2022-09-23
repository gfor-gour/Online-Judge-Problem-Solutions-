#include<stdio.h>
 
int main(){
    int t,n,i;
        scanf("%d",&t);
 
        while(t--){
            int c1=0,c2=0;
            scanf("%d",&n);
            int x[n];
            for(i=0;i<n;i++){
                scanf("%d",&x[i]);
            }
 
            for(i=0;i<n;i++){
                if(x[i]%2 == 0){
                    c1++;
                }
                else
                    c2++;
            }
 
            if(c1<c2)
                    printf("%d\n",c1);
 
            else 
                    printf("%d\n",c2);
        }
}
