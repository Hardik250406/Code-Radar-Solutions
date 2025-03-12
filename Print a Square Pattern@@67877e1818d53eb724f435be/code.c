// Your code here...
#include<stdio.h>
int main(){
    int i,j,x;
    scanf("%d",&x);
    for (i=1;i<=x;i++){
        for (j=1;j<=x-1;j++){
            printf("* ");
        }
        printf("\n ");
    for(j=1;j<=i;j++){
        printf("*");
        }
    }
    return 0;
}