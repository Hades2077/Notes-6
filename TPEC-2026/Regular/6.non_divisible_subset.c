
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Helper functions for min and max
int min(int a, int b) {
 return a < b ? a : b;
}
int max(int a, int b) {
 return a > b ? a : b;
}
int main() {
 int n, k, a, total = 0;
 // Read input n and k
//write the code ==== from here
scanf("%d %d", &n, &k);  // Read n and k

int count[k];  // Array to store counts of remainders
for (int i = 0; i < k; i++) count[i] = 0;

// Read the numbers and count their remainders
for (int i = 0; i < n; i++) {
    scanf("%d", &a);
    count[a % k]++;
}

// Only one element with remainder 0 can be included
if (count[0] > 0) total = 1;

// For remainders 1..k/2
for (int i = 1; i <= k / 2; i++) {
    if (i != k - i) {
        total += max(count[i], count[k - i]);
    } else {
        // Special case: i == k-i (only when k is even)
        if (count[i] > 0) total += 1;
    }
}

//till here
 // Print the size of the largest non-divisible subset
 printf("%d\n", total);
 return 0;
}
