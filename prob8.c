#include <stdio.h>
#include <stdlib.h>

int main(){
    double largestProduct = 0;
    double product = 0;
    char string[1000];
    FILE *input = fopen("prob8input", "r");
    fgets(string, 1000, input);
    int* number = malloc(1000*sizeof(int));
    for(int x = 0; x < 1000; x++){
        number[x] = string[x] - 48;
    }
    for(int x = 12; x <= 1000; x++){
        product = 1;
        for(int i = 0; i < 13; i++){
            product *= number[x-i];
        }
        if (product > largestProduct){
            largestProduct = product;
        }
    }
    printf("%f\n", largestProduct);
}