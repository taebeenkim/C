// ch21ex3.c
// ����, ����, ����, ����, ��ȸ 5������ ���ڿ��� �����ϴ� subjict�迭
// ���� ������ �����ϼ̳���?(Y/N)
// ������ �Է��ϼ���(1~100)
// ������ ����� ������ ����ϴ� ���α׷�

#include <stdio.h>
#include <ctype.h>

int main()
{

    char *subject[5] = {"����", "����", "����", "����", "��ȸ"};
    char ans;
    int score[5];
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("%s������ �����ϼ̳���?(Y/N) ", subject[i]);
        scanf(" %c", &ans);

        // y��� ���� �Է¹ޱ� -> ������ �Է��ϼ��� (0~100):
        if (toupper(ans) == 'Y')
        {
            printf("������ �Է��ϼ���(0~100): ");
            scanf("%d", &score[i]);
        } else {
            score[i] = -1;
        }
    }

    int max = 0;
    int max_idx;
    //�Է��� ���� ����ϱ�
    for(i = 0; i < 5; i++)
    {
        if(score[i] > 0)
        {
            printf("%s����: %d��\n", subject[i], score[i]);
            if(score[i] > max) {
                max = score[i];
                max_idx = i;
            }
        }
    }

    puts("------------------------------");
    printf("�ְ� ������ %d���̰� %s�����Դϴ�.\n",
           max, subject[max_idx]);
    return 0;
}
