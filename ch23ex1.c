// ch23ex1.c
// �л� �̸�, ����, ���� ����ü st_info

#include <stdio.h>
#include <string.h>

// st_info ����ü ����
struct st_info
{
    char name[30];
    char subject[30];
    int age;
};

// score_info ����ü ���� (�̸�, ����, ����, ����, ����, ���)
// (�̸�: name, ����: kor, ����: eng, ����: mat, ����: sum, ���: avg (�Ǽ�)
struct score_info
{
    char name[30];
    int kor;
    int eng;
    int mat;
    int sum;
    float avg;
};

int main()
{
    // stu1 (ȫ�浿 90 80 77) �л��� ������ ����� ���� ����Ѵ�.
    struct score_info stu1 = {"ȫ�浿", 90, 80, 77};
    stu1.sum = stu1.kor + stu1.eng + stu1.mat;
    stu1.avg = stu1.sum / 3.0;
    printf("%s ����: %d, ���: %.1f\n", stu1.name, stu1.sum, stu1.avg);

    struct st_info st1 = {"ȫ�浿","����", 20};

    // ���� 1�� ���ϱ�
    st1.age++;
    strcpy(st1.subject, "����");

    // 20�� ȫ�浿���� ���������� "����"�Դϴ�.
    printf("%d�� %s���� ���������� \"%s\"�Դϴ�.",st1.age, st1.name, st1.subject);
    return 0;
}
