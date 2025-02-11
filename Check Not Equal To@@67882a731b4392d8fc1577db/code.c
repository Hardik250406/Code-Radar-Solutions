// // Your code here...
// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     if (a!=b){
//         printf("True");
//     }
//     else{
//         printf("False"):
//     }
//     return 0;
// }


#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    
    if (a != b) {  // Checks if a is not equal to b
        printf("True");
    } 
    else {
        printf("False");  // Corrected semicolon
    }
    
    return 0;
}
