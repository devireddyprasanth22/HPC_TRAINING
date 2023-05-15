/// Implementation
#include <stdio.h>
int bitwise_add(int a, int b);

int main(){
    int a;
    printf("Please enter number A: ");
    scanf("%d", &a);

    int b;
    printf("Please enter number B: ");
    scanf("%d", &b);

    int final = bitwise_add(a,b);
    printf("bitwise add of both numbers is %d", final);
}

int bitwise_add(int a, int b){
    while(b!=0){
        int carry = a & b;
        a = a ^ b;
        b = carry<<1;
    }
    return a;
}
