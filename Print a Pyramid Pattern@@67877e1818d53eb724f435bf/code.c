#include<stdio.h>
int main(){
    int rows=5,k=1;
    scanf("%d",&rows);
    for(int r=rows;r>=1;r--){
        for(int c=1;c<=r;c++){
            printf(" ");
        }
        for(int c=1;c<=k;c++){
            printf("*");
        }
        for(int c=2;c<=k;c++){
            printf("*");
        }
        k++;
        
        printf("\n");
    }




    return 0;
}