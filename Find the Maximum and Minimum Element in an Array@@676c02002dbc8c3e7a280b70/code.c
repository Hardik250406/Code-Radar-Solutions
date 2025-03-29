// Your code here...
#include<stdio.h>
#include<limits.h>

int main(){
    int N;
    int arr[N];
    scanf("%d",&N);
    int max=-1;
    int min=1;
    for(int i=1;i<=N;i++){
        if (max<arr[i]){
            max=arr[i];
        }
        if(min<arr[i]){
            min =arr[i];
        }
       
    }
     printf("%d ",min);
        printf("%d",max);
}