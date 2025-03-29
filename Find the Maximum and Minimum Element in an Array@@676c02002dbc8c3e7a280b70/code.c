// Your code here...
#include<stdio.h>
#include<limits.h>

int main(){
    int N;
    
    scanf("%d",&N);
    int arr[N];
    int max=-INT_MAX;
    int min=INT_MIN;
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