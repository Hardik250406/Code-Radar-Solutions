// Your code here...
#include<stdio.h>
int main(){
    char a,b,c;
    scanf("%c%c%c",&a,&b,&c);
    if (a=='R'){
        printf("Stop");
    }
    else if (a=='G'){
        printf("Go");

    }
    else if( a=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
}