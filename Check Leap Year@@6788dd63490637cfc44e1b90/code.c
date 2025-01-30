#include <stdio.h>

int main() {
    int a;
    scanf("%a",&a);
    if(a%4==0){
        printf("Leap Year");

    }else if(a==1900){
        printf("Not a Leap Year");
    }
    return 0;
}