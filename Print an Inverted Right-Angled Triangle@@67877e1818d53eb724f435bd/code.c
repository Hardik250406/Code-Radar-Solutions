// Your code here...
#include<stdio.h>
int main(){
    int i,j;
    scanf("%d%d",&i,&j);
    for (i=1;i<=N,i++){
        for (j=N;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}