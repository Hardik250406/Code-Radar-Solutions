// Your code here..
#include<stdio.h>
int fibonacciSeries(int n){
if(n==0)return 0;
if(n==1)return 1;
return fibonacci(n-1)+fibonacci(n-2);
}


for(int i=0;i<n;i++){
    printf("%d",first);

    next=first+second;
    first=second;
    second=next;
}
fibonacciSeries(n);