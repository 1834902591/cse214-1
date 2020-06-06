//Find Maximum from the array

#include<stdio.h>
int main()
{
    int a[10] = {2,7,2,6,4,9,3,4,10,25};
    int size = 10, i, max;

    max = a[0];

    for(i = 1; i < size; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    printf("%d",max);

    return 0;
}
