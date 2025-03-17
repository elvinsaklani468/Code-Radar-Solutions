#include<stdio.h>
int main(){
    int rows,f=1;
    scanf("%d",&rows);
    for(int r=1;r<=rows;r++){
        for(int c=1;c<=r;c++){
            printf("%d ",f);
            f++;
        }
        printf("\n");
    }
    return 0;
}