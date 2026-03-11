 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main() {
 int T,N,B,L,R,ML,MR,X,Y,P,Q;
 scanf("%d",&T);
 for(int i = 0; i < T; i++) {
 scanf("%d",&N);
 for(int j = 0; j < N; j++) {
 scanf("%d",&B);
 if(j) {

//……………..Insert Code Here…………….
X = abs(1 - L) + ML;       // cost if current element is 1
Y = abs(B - L) + ML;       // cost if current element is B[j]
P = abs(1 - R) + MR;       // cost if current element is 1
Q = abs(B - R) + MR;       // cost if current element is B[j]

ML = X > P ? X : P;        // new max if current is 1
MR = Y > Q ? Y : Q;        // new max if current is B[j]
// till here
 } else {

//……………..Insert Code Here…………….
ML = 0;     // max cost if first element is 1
MR = 0;     // max cost if first element is B[j]
//till here
 }
 L = 1;
 R = B;
 }
 printf("%d\n", (ML > MR ? ML : MR));
 }
 return 0;
}
