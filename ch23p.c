// ch23p.c
// ���� ���� ����

// ��ǥ(x, y)�� �ϳ��� ����ü point_info�� ����
struct point_info
{
    int x;
    int y;
};


// �̸�(30��), ������, ���̸� �����ϴ� friend_info ����ü ����
struct friend_info
{
    char name[30];
    char blood;
    int age;
};

#include <stdio.h>

int main()
{
    struct friend_info fr1 = {"ȫ�浿","A","30"};

    struct point_info p1 = {3, 5};
    struct point_info p2 = {20, 30};
    printf("p1�� x: %d, y: %d\n", p1.x, p1.y);
    printf("p2�� x: %d, y: %d\n", p2.x, p2.y);


    // ������ 'A' ȫ�浿�� 30���̴�. <---- fr1
    struct friend_info fr1 = {"ȫ�浿", 'A', 30};
    printf("������ \%c\' %s�� %d���̴�. \n",fr1.blood, fr1.name, fr1.age);

    return 0;
}
