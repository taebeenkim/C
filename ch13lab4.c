// ch13lab4.c

# include <stdio.h>

int main()
{
    int n, s;
    s = 0;

    do {
        printf("정수를 입력하시오: ");
        scanf("%d", &n);
        s += n;

    } while (n!=0);
        printf("합계:", s);
}
