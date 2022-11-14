// ch9p1.c
// 관계연산자

# include <stdio.h>

int main()
{
    int a, b;
    int score;

    a = (4 <10);
    b = (8 == 9);

    printf("a: %d, b: %d\n", a, b);

    score = 78;
    printf("score 80점 이상: %d\n", score >= 80);

    if(score >= 80) {
        printf("당신은 합격입니다!\n");
    } else {
        printf("당신은 불합격입니다.\n");
    }
    return 0;
}
