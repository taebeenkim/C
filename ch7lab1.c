 // ch7lab1.c

 #include <stdio.h>

 int main()

{
    int n1, n2;
    int q, r;

    printf("첫 번째 정수: ");
    scanf("%d", &n1);

    printf("두 번째 정수: ");
    scanf("%d", &n2);

    q = n1 / n2;
    r = n1 % n2;

    printf(" \n몫은 %d입니다.\n", q);
    printf("나머지는 %d입니다.\n", r);

    return 0;

}
