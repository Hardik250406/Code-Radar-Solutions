// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a=b=c){
        printf("Equilateral");

    }
    else if ((b && c)!=a){
        printf("Isosceles")


    }
    else{
        printf("Scalene");
    }
    return 0;
}