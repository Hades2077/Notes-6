#include <stdio.h>
void print(int ar_size, int* ar) {
 int i;
 for(i=0; i<ar_size; i++) {
 printf("%d ", ar[i]);
 }
 printf("\n");
}
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*? Take the last element
? Shift larger elements to the right
? Print the array after every shift or final insertion */
void insertionSort(int ar_size, int *ar) {

    int value = ar[ar_size - 1];
    int i = ar_size - 2;

    while(i >= 0 && ar[i] > value) {
        ar[i + 1] = ar[i];
        print(ar_size, ar);
        i--;
    }

    ar[i + 1] = value;
    print(ar_size, ar);
}
/* Tail starts here */
int main() {

 int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
 scanf("%d", &_ar[_ar_i]);
}
insertionSort(_ar_size, _ar);

 return 0;
}

