// ch10lab1.c

#include <stdio.h>

int main()
{
    int n1;
    int n2;

    printf("���� 2���� �Է��Ͻÿ�. ", &n1, &n2);
    scanf("%d %d", &n1, &n2);
    if(n1 % 2 == 0 && n2 % 2 == 0) {
        printf("¦��");
    } else if(n1 % 2 == 1 && n2 % 2 == 1) {
        printf("Ȧ��");
    } else {
        printf("Ȧ¦");
    }

    return 0;
}
