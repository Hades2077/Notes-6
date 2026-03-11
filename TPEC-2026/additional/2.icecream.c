#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // number of trips

    while(t--) {
        int m, n;
        scanf("%d %d", &m, &n); // money and number of flavors
        int cost[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &cost[i]);

        // find two flavors that sum to m
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                if(cost[i] + cost[j] == m) {
                    printf("%d %d\n", i+1, j+1); // 1-based indices
                    goto next; // break both loops
                }
            }
        }
        next:;
    }

    return 0;
}	
