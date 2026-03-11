#include <stdio.h>

int main() {
    int a[3], b[3];
    int i;
    int a_score = 0, b_score = 0;
	//from here
    // Read Alice's triplet
    for(i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
	
    // Read Bob's triplet
    for(i = 0; i < 3; i++) {
        scanf("%d", &b[i]);
    }
	
    // Compare each element
    for(i = 0; i < 3; i++) {
        if(a[i] > b[i])
            a_score++;
        else if(b[i] > a[i])
            b_score++;
        // if equal, no points added
    }
	//till here
    // Print the result
    printf("%d %d\n", a_score, b_score);

    return 0;
}
