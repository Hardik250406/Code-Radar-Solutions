// Your code here..
#include<stdio.h>
int fibonacciSeries(int n){
if(n==0)return 0;
if(n==1)return 1;
return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}
printf("%d",fibonacciSeries(i));


// for (int i=0;i<=n;i++){
    

// }
