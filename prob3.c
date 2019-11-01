#include "primes.h"
#include <stdio.h>

int main(){
    long long num = 600851475143;

    int* factors = primeFactorization(num);

    for(int x = 0; x < 10; x++){
        if (factors[x] == 0)
            break;
        printf("%d\n", factors[x]);
    }

}