/// Implementation
#include <stdio.h>

int main()
{
    int k = 10;
    int i = 0;
    int j = 1;
    int next = i + j;
    while(k>0){
        printf("%d \n", i);
        i = j;
        j = next;
        next = i + j;
        k--;
    }
    return 0;
}