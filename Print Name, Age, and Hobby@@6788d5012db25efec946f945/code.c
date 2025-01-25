#include <stdio.h>
int main() {
    char a[100],v[100];
    int s;
    scanf("%c %d %c",&a,&s,&v);
    printf("Name: %c\n ",a);
    printf("Age: %s \n ",s);
    printf("Hobby: %v\n",v);
    
    return 0;
}