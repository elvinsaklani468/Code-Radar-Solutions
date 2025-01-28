#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int toggle=a^(1<<a);
    printf("%d",toggle);
    return 0;
}