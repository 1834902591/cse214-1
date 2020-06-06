//Calculate the summation of all elements of the given array

#include<stdio.h>
int main()
{
    int a[10] = {2,7,2,6,4,9,3,4,10,25};
    int size = 10, i, sum = 0;

    for(i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    printf("%d",sum);

    return 0;
}

