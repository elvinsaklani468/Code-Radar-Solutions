#include <stdio.h>


int main() {
      unsigned int a;
    scanf("%d",&a);
    unsigned int low=a &(-a);
    printf("%u",low);
    return 0;
}