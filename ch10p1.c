// ch10p1.c
// 관계연산, 논리연산

#include <stdio.h>

int main()
{
    int age;

    printf("나이를 입력하세요: ");
    scanf("%d", &age);

    // 20세~60세 사이면 '이팔청춘!' 출력하기
    if(age >= 20 && age <= 60) {
        printf("이팔청춘!");
    }
    // 10세 이하, 70세 이상이면 '노약자' 출력하기
    if(age <= 10 || age >= 70) {
        printf("노약자");
    }

    return 0;
}
