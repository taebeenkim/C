// ch10ex1.c
// ������ ��� ���ϱ�
// ����� 70���̻��̰� ��� ������ 40���̻��̸� �հ�

#include <stdio.h>

int main()
{
    int kor, eng, mat;
    int avg;

    printf("���� ����: ");
    scanf("%d", &kor);
    printf("���� ����: ");
    scanf("%d", &eng);
    printf("���� ����: ");
    scanf("%d", &mat);

    avg = (kor + eng + mat) / 3;
    printf("����: %d��, ����: %d��, ����: %d��\n", kor, eng, mat);
    printf("��� %d��", avg);

    if(avg >= 70)
    {
        if(kor >= 40 && eng >= 40 && mat >= 40) {
            printf("��� 70�� �̻����� �հ�");
        } else {
            printf("40�� �̸� ������ �ֽ��ϴ�. ���հ��Դϴ�.");
        }
    } else {
        printf("��� %d������ ���հ��Դϴ�.", avg);
    }

    return 0;
}
