// ch21p1.c
// ¹è¿­

#include <stdio.h>
int main()
{
    int num[3] = {10, 20, 30};

    printf("num: %p\n", num);
    printf("num[0]: %d, *num: %d\n", num[0], *num);

    return 0;
}
