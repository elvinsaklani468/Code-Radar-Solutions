#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int flip= ~num;
    printf("%d",flip);
    return 0;
}