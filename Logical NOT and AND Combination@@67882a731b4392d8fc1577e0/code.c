// // Your code here...  
// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     if (!(a==0 && b==0)){
//         printf("True");
    
//     }
//     else{
//         printf("False");
//     }
//     return 0;

// }


#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (!(a == 0 && b == 0)) {  // Corrected condition
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
