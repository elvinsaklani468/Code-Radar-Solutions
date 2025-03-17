#include<stdio.h>
int main(){
    int rows;
    int k=5;
    scanf("%d",&rows);
    for(int r=1;r<=rows;r++){
        for(int x=k;x>=1;x--){
            printf(" ");
        }
        for(int c=1;c<=r;c++){                                                     
            printf("*");
        }
        printf("\n");
        k--;
    }
    return 0;
}