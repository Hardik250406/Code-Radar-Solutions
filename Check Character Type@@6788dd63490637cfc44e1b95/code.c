// Your code here...
#include<stdio.h>
int main(){
    char X;
   
    scanf("%c ",&X);
    if ((X >='A') && (X<='Z') || (X>='a') && (X<='z')){
        if(X == 'A' || X =='E' ||  X== 'I' || X== 'O' || X== 'U' || X== 'a' || X== 'e' || X== 'i' || X== 'o' || X== 'u'){
            printf("Vowel");
        }
        else {
            printf("Consonant");
        }
        
    }
    else if ((X>=0)&&(x<=9)){
        printf("Digit");
    
    } 
    else{
        printf("Special Character");
    }         

   
    
    return 0;
}
