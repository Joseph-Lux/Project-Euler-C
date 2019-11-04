#include <stdio.h>
#include <math.h>

int nthDigit(num, n){
    num /= (int) pow(10, n-1);
    return num % 10;
}

int isPalindrome(num){
    int places = 1;
    while(num/((int)pow(10, places))){
        places++;
    }
    
    for(int x = 1; x <= places/2; x++){
        if(nthDigit(num, x) != nthDigit(num, places-x+1))
            return 0;
    }
    return 1;
}

int main(){
    int largest = 0;
    for(int x = 999; x > 1; x--){
        for(int y = x; y > 1; y--){
            if(isPalindrome(x*y) && x*y > largest){
                largest = x*y;
            }
        }
    }
    printf("%d\n", largest);
}

