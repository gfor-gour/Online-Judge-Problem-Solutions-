#include<stdio.h>
 
int main(){
        int t,n,x,i,tmp,j;
 
        scanf("%d",&t);
 
 
        while (t--){
        scanf("%d%d",&n,&x);
        int sum = 0,max=0;
        int a[n];
                for(i=0;i<n;i++){
                scanf("%d",&a[i]);
                sum += a[i];
                }
        int b[n];
                for(i=0;i<n;i++){
                scanf("%d",&b[i]);
        }
        
        if(x==0){
                printf("%d\n",sum);
        }      
        else{
        for(i=0;i<n;i++){
                for(j=i;j<n-1;j++){
                        if(a[i]>a[j+1]){
                                tmp = a[i];
                                a[i] = a[j+1];
                                a[j+1] = tmp;
                                
                        }  
                }
        }
        
        for(i=0;i<n;i++){
                for(j=i;j<n-1;j++){
                        if(b[i]<b[j+1]){
                                tmp = b[i];
                                b[i] = b[j+1];
                                b[j+1] = tmp;
                        
                        }
                }        
        }
 
        max = sum;
        for(i=0;i<x;i++){
                        a[i] = b[i];
                        sum = 0;
                        for(j=0;j<n;j++){
                                sum += a[j];
                }
                if(sum>max){
                        max = sum;
                        }
                } 
                        printf("%d\n",max);
                }
        }
        return 0;
}
 
