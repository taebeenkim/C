// ch23p.c
// 구조 정의 연습

// 좌표(x, y)를 하나의 구조체 point_info로 정의
struct point_info
{
    int x;
    int y;
};


// 이름(30자), 혈액형, 나이를 보관하는 friend_info 구조체 정의
struct friend_info
{
    char name[30];
    char blood;
    int age;
};

#include <stdio.h>

int main()
{
    struct friend_info fr1 = {"홍길동","A","30"};

    struct point_info p1 = {3, 5};
    struct point_info p2 = {20, 30};
    printf("p1의 x: %d, y: %d\n", p1.x, p1.y);
    printf("p2의 x: %d, y: %d\n", p2.x, p2.y);


    // 혈액형 'A' 홍길동은 30살이다. <---- fr1
    struct friend_info fr1 = {"홍길동", 'A', 30};
    printf("혈액형 \%c\' %s은 %d살이다. \n",fr1.blood, fr1.name, fr1.age);

    return 0;
}
