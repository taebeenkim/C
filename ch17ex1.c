// ch17ex1.c
// 정수배열 입력받기

#include <stdio.h>

int main()
{
    int i;
    int s = 0;
    int c = 0;
    float avg;
    int n[5];

    for(i = 0; i < 5; i++)
    {
        printf("%d번째 정수를 입력하세요: ", i + 1);
        scanf("%d", &n[i]);
    }

    // 입력 받은 모든 수 출력하기
    // 공백으로 구반해 한 줄로 출력
    for(i = 0; i < 5; i++)
        printf("%d ", n[i]);
    printf("\n");

    // 3번째로 입력된 정수 출력하기
    // 3번째로 입력된 정수는 00입니다.
    printf("3번째로 입력된 정수는 %d입니다.\n,", n[2]);

    // 입력된 수 합(s) 구하기
    for(i = 0; i < 5; i++)
    {
        s += n[i];
        c++;
    }
    avg = (float)s / c;
    printf("총점: %d\n", s);
    printf("학생수: %d\n", c);
    printf("평균: %.1f\n", avg);

    return 0;
}
