// ch13lab4.c

# include <stdio.h>

int main()
{
    int n, s;
    s = 0;

    do {
        printf("������ �Է��Ͻÿ�: ");
        scanf("%d", &n);
        s += n;

    } while (n!=0);
        printf("�հ�:", s);
}
