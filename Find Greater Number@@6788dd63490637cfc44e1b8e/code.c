// // Your code here...
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if ( a > b ){
        printf("%d",a);
    
    }
    else if ( a < b ){
        printf( "%d"  , b );
    }
    else{
        printf("0")
    }
   
    return 0;
}

// #include <stdio.h>

// int main() {
//     int a, b;
//     scanf("%d%d", &a, &b);  // Correct format

//     if (a > b) {
//         printf("%d", a);  // Corrected printf
//     } 
//     else if (a < b) {  // Fixed else if condition
//         printf("%d", b);  // Corrected printf
//     } 
//     else {  // Added else case to handle equal numbers
//         printf("0");
//     }

//     return 0;
// }
