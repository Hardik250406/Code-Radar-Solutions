// Your code here..
#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n-1;i++){
        for(j=1;j<=2(n-1);j++){
            printf("*");
        }
        for(j=i;j<=n;j++){
            printf(" ");
        }
        printf("\n");
    }
}