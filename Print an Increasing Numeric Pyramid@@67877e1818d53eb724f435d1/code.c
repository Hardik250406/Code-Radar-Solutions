// Your code here...


#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i--){
        
        for (j=i;j>=n;j++){
            printf("%d\n",j);    
        }
        printf("%d ",i);
         
    }
   
   
    return 0;
}