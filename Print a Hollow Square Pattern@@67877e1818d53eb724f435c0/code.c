#include<stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    for(int r=1;r<=rows;r++){
        for(int c=1;c<=rows;c++){ 
            if(r ==1 || r== rows){
                printf("%c",'*');
            }
            else if (c == 1 || c == rows){
                printf("*");
            }
            else{
                printf(" ");
            }                                                   /* a ab abc abcd abcde */
            
        }
        printf("\n");
    }








    return 0;
}