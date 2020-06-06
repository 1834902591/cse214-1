//Find the minimum fron the array

#include<stdio.h>
int main()
{
    int a[10] = {2,7,2,6,4,9,3,1,10,25};
    int size = 10, i, min;

    min = a[0];

    for(i = 1; i < size; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }
    printf("%d",min);

    return 0;
}

