// ch25ex1.c

#include <stdio.h>

void square(int n1, int n2);

int main()
{
    int n1, n2;

    printf("두개의 정수를 입력하세요: ");
    scanf("%d %d", &n1, &n2);
    square(n1, n2);
    printf("In main() n1: %d, n2: %d\n", n1, n2);
    return 0;

}
void square(int n1, int n2)
{
    n1 *= n1;
    n2 *= n2;
    printf("In square() n1 : %d, n2: %d\n", n1, n2);
}
