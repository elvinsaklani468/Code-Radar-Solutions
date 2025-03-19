#include<stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    for(int r=1;r<=rows;r++){
        if(r==1){
            printf("1");
        }
        else{
            for(int c=0;c<r;c++){
                printf("%d ",c);
            }
        }printf("\n");
    }







    return 0;

}