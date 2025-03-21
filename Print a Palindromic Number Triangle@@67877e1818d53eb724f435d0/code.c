#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    for(int r=1;r<=rows;r++){
        for(int c=1;c<=rows-r;c++){
            printf(" ");
        }
        for(int c=1;c<=r;c++){
            printf("%d",c);
        }
        for(int c=r-1;c>=1;c--){
            printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}