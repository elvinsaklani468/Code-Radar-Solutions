#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int nthbit=(a>>b)& 1;
    printf("%d",nthbit);
    
    return 0;
}