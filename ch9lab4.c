// ch9lab4.c

#include <stdio.h>

int main()
{
    int h;
    int m;

    printf("���� �ð��� �Է��ϼ���: ");
    scanf("%d:%d", &h, &m);

    // �Էµ� �� ���� 30���� ������ �ð����� �����´�.
    if(m < 30) {
        h -= 1; // h = h - 1;
        m += 60; // m = m + 30;
    }

    m = m - 30;
    printf("30�� ���� %d:%d\n", h, m);

    return 0;

}
