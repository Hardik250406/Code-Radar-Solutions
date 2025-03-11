// Your code here...


#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        
        for (j=i;j>=i;j++){
            printf("%d ",j);    
        }
        printf("%d\n",i);
         
    }
   
   
    return 0;
}