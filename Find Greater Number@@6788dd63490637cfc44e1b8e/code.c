#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d", a);
    }else if(b>a){
        printf("%d", b);
    }else(a==b){
        printf("Equal")
    }

    return 0;
}