#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];
	//from here
    // Read the matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int LeftDiagonalSum = 0;  // Top-left to bottom-right
    int RightDiagonalSum = 0; // Top-right to bottom-left

    for(int i = 0; i < n; i++) {
        LeftDiagonalSum += a[i][i];           // a[0][0], a[1][1], ...
        RightDiagonalSum += a[i][n - 1 - i];  // a[0][n-1], a[1][n-2], ...
    }
	//till here
    printf("%d\n", abs(LeftDiagonalSum - RightDiagonalSum));

    return 0;
}
