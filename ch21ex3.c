// ch21ex3.c
// 국어, 영어, 수학, 과학, 사회 5과목의 문자열을 저장하는 subjict배열
// 국어 시험을 응시하셨나요?(Y/N)
// 성적을 입력하세요(1~100)
// 응시한 과목과 성적을 출력하는 프로그램

#include <stdio.h>
#include <ctype.h>

int main()
{

    char *subject[5] = {"국어", "영어", "수학", "과학", "사회"};
    char ans;
    int score[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%s시험을 응시하셨나요?(Y/N) ", subject[i]);
        scanf(" %c", &ans);

        // y라면 성적 입력받기 -> 성적을 입력하세요 (0~100):
        if (toupper(ans) == 'Y')
        {
            printf("성적을 입력하세요(0~100): ");
            scanf("%d", &score[i]);
        } else {
            score[i] = -1;
        }
    }

    int max = 0;
    int max_idx;
    //입력한 성적 출력하기
    for(i = 0; i < 5; i++)
    {
        if(score[i] > 0)
        {
            printf("%s과목: %d점\n", subject[i], score[i]);
            if(score[i] > max) {
                max = score[i];
                max_idx = i;
            }
        }
    }

    puts("------------------------------");
    printf("최고 점수는 %d점이고 %s과목입니다.\n",
           max, subject[max_idx]);
    return 0;
}
