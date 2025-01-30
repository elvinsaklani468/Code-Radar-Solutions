#include <stdio.h>

int main() {
    char a;
    char str1[]={'a','e','i','o','u','A','E','I','O','U','\0'};
    if(a==str1){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    return 0;
}