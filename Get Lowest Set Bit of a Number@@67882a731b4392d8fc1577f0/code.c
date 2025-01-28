#include <stdio.h>


int main() {
    int num,pos;
    scanf("%d",&num);
    if(num==0){
        return -1;
    }
    while ((nume&1)==0){
        num>>1;
        pos++;
    }
    return pos;
    printf("%d",pos);
    return 0;
}