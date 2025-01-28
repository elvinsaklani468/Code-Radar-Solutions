#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    clear_nth=a &(~(1<<b));
    printf("%d",clear_nth);

    return 0;
}