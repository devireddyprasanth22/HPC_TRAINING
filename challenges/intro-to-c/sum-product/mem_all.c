#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* a = (int*)malloc(4 * sizeof(int));
    printf("a lives at: %p\n", a);

    for (int i = 0; i < 4; ++i)
        a[i] = i;

    for (int i = 0; i < 4; ++i)
        printf("%d, ", a[i]);

    a = (int*)realloc(a, 7);
    printf("\na lives at: %p\n", a);

    for (int i = 0; i < 7; ++i)
        printf("%d, ", a[i]);

    free(a);
    return 0;
}