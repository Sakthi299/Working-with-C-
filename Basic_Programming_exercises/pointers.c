#include<stdio.h>
#define SIZE 10
void main()
{
    int *arr[3];
    int a = 100, b = 200, c = 500, i;
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    for(i = 0; i < 3; i++)
    {
        printf("Address = %d\t Value = %d\n", arr[i], *arr[i]);
    }
}
