#include<stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    for(int r=1;r<=rows;r++){
        for(int c=r+1;c<=rows;c++){
            printf(" ");
        }
        for(int c=1;c<=2*r-1;c++){
            printf("*");
        }
        printf("\n");
    }
        for(int r=rows-1;r>=1;r--){
            for(int c=1;c<=rows-r;c++){
                printf(" ");
                
            }
            for(int c=1;c<=(2*r-1);c++){
                printf("*");
            }
            printf("\n");   
    }
    return 0;
}