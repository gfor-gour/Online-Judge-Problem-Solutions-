#include<stdio.h>
 
int main(){
    int i,n;
    scanf("%d",&n);
    int x[n];
    int max=1;
        for(i=0;i<n;i++){
            scanf("%d",&x[i]);
        }
        int c=1;
        for(i=0;i<n-1;i++){
            if(x[i+1] <= 2*x[i]){
                    c++;
                    if(c>max)
                        max = c;
                }
                else 
                    c = 1;        
                    }
 
            printf("%d",max);
            return 0;
}
