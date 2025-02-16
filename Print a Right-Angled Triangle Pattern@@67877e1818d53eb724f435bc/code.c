// Your code here...
#include<stdio.h>
int main(){
    int i,j,N;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        for (j=1;j<=i;j++){
            printf("* ");
        }
        printf("%d\n");
    }
    return 0;
}