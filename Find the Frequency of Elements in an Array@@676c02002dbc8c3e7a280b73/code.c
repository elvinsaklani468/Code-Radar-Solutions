#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int freq[50]={0};

    for(int i=1;i<n;i++){
        freq[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        printf("%d %d \n",i,freq[i]);
    }





















    return 0;
}