#include <stdio.h>
void dteb(int num){
    if(num>1){
        dteb(num/2);
    }
    printf("%d",num&2);

}
int main(){
    int num;
    scanf("%d",&num);
    dtob(num);
    return 0;
}









int main() {
    
    return 0;
}