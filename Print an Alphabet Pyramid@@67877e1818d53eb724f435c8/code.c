#include<stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    for(int r=1;r<=rows;r++){
        for(int c=1;c<=r;c++){
            printf("%c ",64+c);
        }
        printf("\n");
    }
    return 0;
}