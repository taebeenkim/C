// ch10p1.c
// ���迬��, ������

#include <stdio.h>

int main()
{
    int age;

    printf("���̸� �Է��ϼ���: ");
    scanf("%d", &age);

    // 20��~60�� ���̸� '����û��!' ����ϱ�
    if(age >= 20 && age <= 60) {
        printf("����û��!");
    }
    // 10�� ����, 70�� �̻��̸� '�����' ����ϱ�
    if(age <= 10 || age >= 70) {
        printf("�����");
    }

    return 0;
}
