#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    qsort(arr, n, sizeof(int), compare);

    int minDiff = arr[1] - arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] - arr[i-1] < minDiff)
            minDiff = arr[i] - arr[i-1];

    for(int i = 1; i < n; i++)
        if(arr[i] - arr[i-1] == minDiff)
            printf("%d %d ", arr[i-1], arr[i]);

    return 0;
}
