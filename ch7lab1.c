 // ch7lab1.c

 #include <stdio.h>

 int main()

{
    int n1, n2;
    int q, r;

    printf("ù ��° ����: ");
    scanf("%d", &n1);

    printf("�� ��° ����: ");
    scanf("%d", &n2);

    q = n1 / n2;
    r = n1 % n2;

    printf(" \n���� %d�Դϴ�.\n", q);
    printf("�������� %d�Դϴ�.\n", r);

    return 0;

}
