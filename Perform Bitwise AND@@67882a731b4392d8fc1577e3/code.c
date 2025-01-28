#include <stdio.h>

int main() {
    int a,b;
    scnaf("%d %d",&a,&b);
    int min= a&b;
    printf("%d",min);
    return 0;
}