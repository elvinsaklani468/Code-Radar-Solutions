#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int max;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 ==0) arr[i] = max;
        else printf("-1");
    }












    return 0;
}