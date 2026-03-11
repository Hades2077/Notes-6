#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){ return (*(int*)a - *(int*)b); }

int main() {
    int n, k, count=0;
    scanf("%d %d",&n,&k);
    int prices[n];
    for(int i=0;i<n;i++) scanf("%d",&prices[i]);

    qsort(prices, n, sizeof(int), cmp);

    for(int i=0;i<n && k>=prices[i];i++){
        k -= prices[i];
        count++;
    }

    printf("%d\n", count);
    return 0;
}
