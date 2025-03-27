// Your code here...
#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if (i%2==0){
            count++;

        }
if (count==2){
    printf("Prime");
    }
else{
    printf("Not Prime");
        }
    }
}