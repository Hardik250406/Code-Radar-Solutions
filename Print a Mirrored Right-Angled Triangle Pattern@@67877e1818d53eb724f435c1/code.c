
#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for (i=n;i<=1;++i){
        for(j=i;j<=n;j++)
        printf("*");
        for (j=1;j<=n-1;j++){
            printf("\n");
        }
    }
    printf(" ");
}