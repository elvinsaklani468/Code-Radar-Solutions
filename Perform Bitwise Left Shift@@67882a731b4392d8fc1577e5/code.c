#include <stdio.h>
int main() {
    int a,b;
    scnaf("%d%d",&a,&b);
    int m=a<<b;
    printf("%d",m);
    return 0;
}