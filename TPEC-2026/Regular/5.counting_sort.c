#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
	//from here
    // Read the array
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Initialize frequency array of size 100
    int b[100] = {0};

    // Count occurrences
    for(int i = 0; i < n; i++) {
        b[a[i]]++;
    }

    // Print the frequency array
    for(int i = 0; i < 100; i++) {
        printf("%d", b[i]);
        if(i != 99) {
            printf(" ");
        }
    }
    printf("\n");
	//till here
    return 0;
}
