#include <stdio.h>
#include <math.h>

int main(){
    int sumOfSquares = 0;
    int squaredSum = 0;
    for(int x = 1; x <= 100; x++){
        squaredSum += x;
        sumOfSquares += (int) pow(x, 2);
    }
    squaredSum = (int) pow(squaredSum, 2);
    printf("%d\n", squaredSum-sumOfSquares);
}