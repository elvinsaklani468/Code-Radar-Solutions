#include<stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    for(int r=rows;r<=rows;r--){
        for(int c=1;c<=r;c++){                                                      
            printf("%c",c+96);
        }
        printf("\n");
    }
    return 0;
}