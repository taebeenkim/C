// ch25lab2.c

#include <stdio.h>

void plus_one(int arr[]);

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    plus_one(arr);

    printf("plus_one() È£Ãâ µÚ\n");
    printf("{ ");
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("}\n");
    return 0;

}

void plus_one(int arr[])
{
    for(int i = 0; i < 5; i++)
        arr[i] += 1;
}
