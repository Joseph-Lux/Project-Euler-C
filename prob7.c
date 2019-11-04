#include <stdio.h>
#include <stdlib.h>
#include "primes.h"

int main(){
    long* primes = malloc(10001 * sizeof(long));
    for(int x = 0; x < 10000; x++){
        primes[x] = 0;
    }

    primes[0] = 2;

    for(int x = 1; x <= 10001; x++){
        primes[x] = nextPrimeInList(primes, primes[x-1], x);
    }
    printf("%ld\n", primes[10000]);
}