#include <stdio.h>
int main(){
    int rows,k=1;
    for(int r=5;r>=1;r--){
        for(int c=1;c<=r;c++){
            printf(" ");
        }
        for(int c=1;c<=k;c++){
            printf("%d ",c);
        }
        k++;
        printf("\n");
    }    
    return 0;
}