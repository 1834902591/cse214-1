//Reverse the given array and store it in another array

#include<stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, size = 10;
    int b[10], i;

    for(i = size - 1; i >= 0; i--)
    {
        b[i] = a[i];
    }

    for(i = size - 1; i >= 0; i--)
    {
        printf("%d ",b[i]);
    }
    return 0;
}

