#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int c;
    double cSq;
    for(int a = 1; a < 1000; a++){
        for(int b = a; b < 1000; b++){
            cSq = sqrt(pow(a, 2) + pow(b, 2));
            c = (int)cSq;
            if (cSq - c == 0.0){
                //printf("%d\n", a+b+c);
                if(a + b + c == 1000)
                    printf("abc: %d\n", a*b*c);
            }
        }
    }
}