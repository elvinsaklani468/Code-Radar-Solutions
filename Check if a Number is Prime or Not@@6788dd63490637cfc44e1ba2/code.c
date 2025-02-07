#include<stdio.h>
int main(){
    
    int a;
    scanf("%d",&a);
    int num=a;
    for(int i=2;i<=a-1;i++){
        if(a%i==0){
            printf("not prime");
        }
    }
    if(num==a){
        printf("prime");
    }
    else{
        printf("");
    }
    return 0;
}