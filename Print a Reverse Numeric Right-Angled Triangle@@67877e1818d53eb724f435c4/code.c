#include<stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    for(int r=rows;r>=1;r--){
        for(int c=1;c<=r;c++){                                                      
            printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}