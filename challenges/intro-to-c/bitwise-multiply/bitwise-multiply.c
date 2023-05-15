/// Implementation
#include <stdio.h>
#include "../bitwise-add/bitwise_adder.h"

int bitwise_multiply(int a, int b);

int main(){
    int a;
    printf("Please enter number A: ");
    scanf("%d", &a);

    int b;
    printf("Please enter number B: ");
    scanf("%d", &b);

    int final = bitwise_multiply(a,b);
    printf("bitwise product of both numbers is %d", final);
}

int bitwise_multiply(int a, int b){
    int result = 0;
    while(b!=0){
        if(b & 1){
            result = bitwise_add(result,a);
        }
        a = a << 1;
        b = b >> 1;
    }
    return result;
}