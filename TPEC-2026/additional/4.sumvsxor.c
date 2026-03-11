#include <stdio.h>

int main() {
    long n, c=1;
    scanf("%ld",&n);
    for(long t=n; t; t>>=1) {
    	if(!(t&1)) c*=2;
	}
    printf("%ld\n",c);
}
