#include <stdlib.h>
#include <stdio.h>

int isPrime(int number){
    for(int i=2; i < number/2; i++){
        if(number%i == 0)
            return 0;
    }
    return 1;
}

int nextPrime(long long num){
    long long next = num;
    while(1){
        next += 2;
        if(isPrime(next)){
            return next;
        }
    }
}

int* primeFactorization(long long number){
    int *factors = (int *)malloc(50 * sizeof(int));
    for(int x = 0; x < 50; x++){
        factors[x] = 0;
    }
    int index = 0;
    long long range = number/2;
    for(int prime = 2; prime < range; prime++){
        if(number == 1){
            return factors;
        }
        if(isPrime(prime)){
            while (number % prime == 0){
                number /= prime;
                factors[index] = prime;
                index++;
            }
        }
    }
    return factors;
}