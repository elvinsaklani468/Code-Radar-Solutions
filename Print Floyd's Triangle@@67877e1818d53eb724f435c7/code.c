#include<stdio.h>
int main(){
    int rows=5,f=1;
    for(int r=1;r<=rows;r++){
        for(int c=1;c<=r;c++){
            printf("%d ",f);
            f++;
        }
        printf("\n");
    }
    return 0;
}