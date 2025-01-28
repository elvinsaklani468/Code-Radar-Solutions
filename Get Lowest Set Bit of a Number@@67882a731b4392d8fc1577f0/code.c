#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int low=a &(-a);
    printf("%d",low);
    return 0;
}