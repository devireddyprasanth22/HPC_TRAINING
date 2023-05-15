/// Implementation
# include <stdio.h>
int gcd(int a, int b);

int main(){
    int a;
    printf("Please enter number A: ");
    scanf("%d", &a);

    int b;
    printf("Please enter number B: ");
    scanf("%d", &b);

    int final = gcd(a, b);
    printf("The GCD is %d", final);
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
