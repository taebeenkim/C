// ch22ex1.c
// 5개 정수 데이터를 저장하기 위한 메모리 할당받기

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *ptr;

    ptr = (int *)malloc(10 * sizeof(int));

    if(ptr == NULL)
    {
        printf("메모리 할당 실패!");
        exit(1);
    }

    for(i = 0; i < 10; i++)
    {
        ptr[i] = i *10;
    }

    for(i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr); // 메모리 해제
    return 0;
}
