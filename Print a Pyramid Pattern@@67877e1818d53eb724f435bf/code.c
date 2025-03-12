// Your code here...
#include<stdio.h>
int  main(){
    int i,j,x;
    scanf("%d",&x);
    for (i=1;i<=x;i++){
        
        for (j=1;j<=i;++j){
            for(j=1;j<=i;j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}