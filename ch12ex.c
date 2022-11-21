// ch12ex1.c

#include <stdio.h>

int main()
{
    int choice;
    printf("----------------\n");
    printf("무엇을 하시겠습니까?\n");
    printf("1. 새로운 연락처 추가\n");
    printf("2. 연락처 편집\n");
    printf("3. 연락처 전화");
    printf("4. 연락처 문자 메세지\n");
    printf("5. 종료\n");
    printf("----------------\n");

    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        printf("1. 연락처를 추가합니다.\n");
        break;
    case 2:
        printf("2. 연락처를 수정합니다.\n");
        break;
    case 3:
        printf("3. 연락처에 전화합니다.\n");
        break;
    case 4:
        printf("4. 메세지를 전송합니다.\n");
        break;
    case 5:
        exit(0);
    default:
        printf("잘못된 선택입니다.\n");
    }

    return 0;
}
