
#include<stdio.h>
int main(){
    int i,j,s;
    scanf("%d",&s);
    for (i=1;i<=s;i++){
        for (j=1;j<=s-1;j--)
        for (j=1;j<=s;--j){
            printf("%d",i);
        }
        printf("%d",j);
    }
    printf("\n");
    return 0;

}