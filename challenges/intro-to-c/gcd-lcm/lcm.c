/// Implementation
#include <stdio.h>
int lcm (int a , int b);
int gcd (int a, int b);

int main(){
    int a;
    printf("Please enter number A: ");
    scanf("%d", &a);

    int b;
    printf("Please enter number B: ");
    scanf("%d", &b);

    int final = lcm(a, b);
    printf("The LCM is %d", final);
}

int lcm(int a , int b){

    return a/ gcd(a, b) * b;
}

int gcd(int a, int b){
    int r;
    while (b != 0){
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}