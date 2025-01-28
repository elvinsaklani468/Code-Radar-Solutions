#include <stdio.h>


int main() {
    int num,pos=0;
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