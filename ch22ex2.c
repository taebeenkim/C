// ch22ex2.c
// n개의 난수 생성하기

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    int n;
    int *randNum;

    srand(time(NULL));

    // 몇 개의 난수를 생성할까요? <---- n
    printf("몇개의 난수를 생성할까요? ");
    scanf("%d", &n);

    //  randNum에 n개의 메모리 할당 하기
    randNum = (int *)malloc(n * sizeof(int));

    // 할당 실패 확인
    if(randNum == NULL)
    {
        printf("메모리 할당 실패!");
        exit(1);
    }

    // 성공시 randomNum에 1~500 사이의 난수 대입, 출력하기
    for(i = 0; i < n; i++)
    {
        randNum[i] = rand() % 500 + 1;
        printf("%3d ", randNum[i]);

    }


    // 메모리 해제 하기
    free(randNum);

    return 0;
}
