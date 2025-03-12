// Your code here...
#include<stdio.h>
int main(){
    int i,j,x;
    scanf("%d",&x);
    for (i=1;i<=x;i++){
        for (j=1;j<=x-1;j++){
            printf("* ");
        }
        printf("* ");
    }
    return 0;
}