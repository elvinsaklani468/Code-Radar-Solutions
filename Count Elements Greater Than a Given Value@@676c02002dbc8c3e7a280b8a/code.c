#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d\n",&n,&k);
    int arr[n];
    count=0;
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        if(arr[i]>k) count++;
    }
    printf("%d",count);












    return 0;
}