// Your code here...
#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ((a> b)&&(a>c)){
        printf(a);
    }
    else if ((a<b) &&( c< b)){
        printf(b);
    }
    else {
        printf(c);
    }
    
    return 0;
   
}