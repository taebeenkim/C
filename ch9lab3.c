// ch9lab3.c
 #include <stdio.h>

 int main()
 {
     int t;

     printf("���� �ð��� �Է��ϼ���. ");
     scanf("%d", &t);

     if(t <= 10) {
        printf("Good morning");
     } else if (t <= 20 ) {
        printf("Good day");
     } else {
        printf("Good evening");
     }
     return 0;
 }
