#include <stdio.h>

int main() {
    int a,b;
    scnaf("%d%d",&a,&b);
    int toggle=a^(1<<a);
    pirntf("%d",toggle);
    return 0;
}