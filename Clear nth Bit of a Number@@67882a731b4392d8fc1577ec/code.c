#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int clear_nth=a &(~(1<<b));
    printf("%d",clear_nth);

    return 0;
}