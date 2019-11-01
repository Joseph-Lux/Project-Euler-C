#include <stdio.h>

int main(){
    int sum = 2;
    int holder = 0;
    int num = 2;
    int lastNum = 1;

    while(num < 4000000){
        holder = num + lastNum;
        lastNum = num;
        num = holder;
        if (num%2 == 0)
            sum += num;
    }

    printf("%d\n", sum);


}