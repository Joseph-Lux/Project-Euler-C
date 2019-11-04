#include <stdio.h>
#include <stdlib.h>
#include "primes.h"

int main (){
    long prime = 2;
    long long sum = 0;
    int length = 0;
    long* primes = malloc(200000*sizeof(long));

    while(prime < 2000000){
        primes[length] = prime;
        sum += prime;
        length++;
        if (length > 199998){
            printf("Increase array length. \n");
            break;
        }
        prime = nextPrimeInList(primes, prime, length);
    }
    printf("%lld\n", sum);
}