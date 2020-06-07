//Merge the elements of two sorted array

#include<stdio.h>
int main()
{
    int a[5] = {1, 8, 6, 2, 7}, size_a = 5;
    int b[5] = {5, 4, 3, 9, 10}, i, j, size_b = 5;
    int c[10], temp;
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
    printf("\n");

    for(i = 0; i < size_c; i++)
    {
        for(j = i + 1; j < size_c; j++)
        {
            if(c[i] > c[j]){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for(i = 0; i < size_c; i++){
        printf("%d ",c[i]);
    }

    return 0;
}

