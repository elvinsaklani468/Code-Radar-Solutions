#include <stdio.h>

int getl(int num){
    if (num==0){
        return -1;
    }
    while ((num&1)==0){
        num>>1;
        pos++
    }
    return pos;
}
int main() {
    int num,pos;
    scanf("%d",&num);
    pos=getl(num);
    printf("%d",pos);
    return 0;
}