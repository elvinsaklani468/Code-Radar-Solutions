#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int freq[100] = {0};  // assume elements are < 100

    for (int i = 0; i < n; i++) {
        scanf("%d ",&arr[i]);
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int result = 0;

    // Find max frequency and smallest element with it
    for (int i = 0; i < 100; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }

    printf("%d\n", result);
    return 0;
}