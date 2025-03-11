
#include<stdio.h>
int main(){
    int i,j,s;
    scanf("%d",&s);
    for (i=1;i<=s;i++){
        for (j=1;j<=i;j++){
        printf("%d",j);}
        for (j=i-1;j>=1;j--){
            printf(" %d",j);
        }
        printf("\n"); 
    }
    
    return 0;

}