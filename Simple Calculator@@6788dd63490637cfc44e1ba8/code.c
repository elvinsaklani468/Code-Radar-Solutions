#include <stdio.h>
int main() {
    int a,b,result;
    scanf("%d %d",&a ,&b);
    char ch;
    scanf(" %c",&ch);
    switch (ch){
        case '+':
        result=a+b;
        printf("%d",result);
        break;
        case '-':
        result=a-b;
        printf("%d",result);
        break;
        case '*':
        result=a*b;
        printf("%d",result);
        break;
        case '/':
        if (b != 0)  // Checking division by zero
                printf("%d", a / b);
            else
                printf("error");
            break;
        default:
        printf("Invalid Operator");
        break;
    }    

    return 0;
}