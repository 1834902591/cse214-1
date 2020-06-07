//Declare another array with five (5) values and merge two array into one array

#include<stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5}, size_a = 5;
    int b[5] = {6, 7, 8, 9, 10}, i, j, size_b = 5;
    int c[10];
    int size_c = size_a + size_b;

    for(i = 0; i < size_a; i++)
    {
        c[i] = a[i];
    }

    for(i = 0, j = size_a; i < size_c; i++,j++)
    {
        c[j] = b[i];
    }

    for(i = 0; i < size_c; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}

