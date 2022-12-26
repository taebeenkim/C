// ch24ex2_2.c

#include <stdio.h>

void twice(int n);

int main()
{
    twice(5);
    twice(3);
    return 0;
}

void twice(int n)
{
    n = n * 2;
    printf("twice 함수에서 n: %d\n", n);

}
