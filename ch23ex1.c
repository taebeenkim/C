// ch23ex1.c
// 학생 이름, 과목, 나이 구조체 st_info

#include <stdio.h>
#include <string.h>

// st_info 구조체 정의
struct st_info
{
    char name[30];
    char subject[30];
    int age;
};

// score_info 구조체 정의 (이름, 국어, 영어, 수학, 총점, 평균)
// (이름: name, 국어: kor, 영어: eng, 수학: mat, 총점: sum, 평균: avg (실수)
struct score_info
{
    char name[30];
    int kor;
    int eng;
    int mat;
    int sum;
    float avg;
};

int main()
{
    // stu1 (홍길동 90 80 77) 학생의 총점과 평균을 구해 출력한다.
    struct score_info stu1 = {"홍길동", 90, 80, 77};
    stu1.sum = stu1.kor + stu1.eng + stu1.mat;
    stu1.avg = stu1.sum / 3.0;
    printf("%s 총점: %d, 평균: %.1f\n", stu1.name, stu1.sum, stu1.avg);

    struct st_info st1 = {"홍길동","수학", 20};

    // 나이 1살 더하기
    st1.age++;
    strcpy(st1.subject, "과학");

    // 20살 홍길동님의 수강과목은 "수학"입니다.
    printf("%d살 %s님의 수강과목은 \"%s\"입니다.",st1.age, st1.name, st1.subject);
    return 0;
}
