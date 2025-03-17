// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int a;
        for (int j=1;j<=n;j++){
            printf("%d",a);
            a+=(n-j);

        }
        printf("\n");
    }

}

