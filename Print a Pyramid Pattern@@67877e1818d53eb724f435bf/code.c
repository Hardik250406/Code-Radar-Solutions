// Your code here...
#include<stdio.h>
int  main(){
    int i,j,x;
    scanf("%d",&x);
    for (i=1;i<=x;i++){
        
        for (j=1;j<=x-i;j++){
            for(j=0;j<=(2*i-1);j++){
                printf(" ");
            }
        printf("*");
        }
        printf("\n");
    }
}