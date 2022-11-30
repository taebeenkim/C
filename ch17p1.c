// ch17p1.c
// 배열 초기화

#include <stdio.h>

int main()
{
    int i;
    int arr1[5] = {3, 5, 1, 2, 7};
    int arr2[5] = {0};
    int arr3[5];

    float farr[3] = {0.14, 1.14, 2.14};
    char str[5] = {'p', 'i', 't', 'c', 'a'};

    for(i = 0; i < 3; i++)
        printf("%.1f ", farr[i]);
    printf("\n");

    for(i = 0; i < 5; i++)
        printf("%c ", str[i]);
    printf("\n");

    printf("arr1[0]: %d, ", arr1[0]);
    printf("arr1[1]: %d, ", arr1[1]);
    printf("arr1[2]: %d, ", arr1[2]);
    printf("arr1[3]: %d, ", arr1[3]);
    printf("arr1[4]: %d\n", arr1[4]);

    for(i = 0; i < 5; i++)
        printf("arr1[%d]: %d, ", i, arr1[i]);
    printf("\n");

    for(i = 0; i < 5; i++)
        printf("arr2[%d]: %d, ", i, arr2[i]);
    printf("\n");

    for(i = 0; i < 5; i++)
        printf("arr3[%d]: %d, ", i, arr3[i]);
    printf("\n");
    return 0;
}
