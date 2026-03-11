#include <stdio.h>

int main() {
    int l, r;
    scanf("%d %d", &l, &r);

    int maxXor = 0;
    for(int i = l; i <= r; i++) {
        for(int j = i; j <= r; j++) {
            int x = i ^ j;
            if(x > maxXor) maxXor = x;
        }
    }

    printf("%d\n", maxXor);
    return 0;
}
