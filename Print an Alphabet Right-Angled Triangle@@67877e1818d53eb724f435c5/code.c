#include<stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    for(int r=1;r<=rows;r++){
        for(int c=r;c<=1;c++){
            printf("%c",65);
        }
        printf("\n");
    }
    return 0;
}
