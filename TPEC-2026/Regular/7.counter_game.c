#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int isPow2(long unsigned int);
unsigned long int largePow(long unsigned int);
int main() {
 int t,i,win;
 long unsigned int n;
//……………..Insert Code Here…………….
scanf("%d", &t);  // read number of test cases

for(i = 0; i < t; i++) {
    scanf("%lu", &n);  // read the initial number for the game

    int turn = 0;  // 0 = Louise, 1 = Richard

    while(n > 1) {
        if(isPow2(n)) {
            n /= 2;  // if n is power of 2, divide by 2
        } else {
            n -= largePow(n);  // else subtract largest power of 2 less than n
        }
        turn = 1 - turn;  // switch turn
    }

    if(turn == 1)
        printf("Louise\n");
    else
        printf("Richard\n");
}
//till here
 return 0;
}
int isPow2(long unsigned int n)
 {
 //……………..Insert Code Here…………….
 
    return (n & (n - 1)) == 0;  // returns 1 if n is power of 2, else 0
 
}
long unsigned int largePow(long unsigned int n)
 {
 long unsigned int m;
 while(n)
 {
 m=n;
 n=n&(n-1);
 }
 return m; }
