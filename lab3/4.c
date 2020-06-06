//Find the Second Minimum from the array

#include<stdio.h>
#include<Limits.h>
int main()
{
    int a[10] = {20, 16, 11, 5, 6, 10, 12, 15, 19, 18};
    int size = 10, i, min, s_min;

    min = INT_MAX;
    s_min = INT_MAX;

    for(i = 0; i < size; i++)
    {
        if(a[i] < min)
        {
            s_min = min;
            min = a[i];
        }
        else if(s_min > a[i] && a[i] > min)
        {
            s_min = a[i];
        }
    }
    if(s_min == INT_MAX)
    {
        printf("No Second Mimimum Number");
    }
    else
    {
        printf("%d ",s_min);
    }


    return 0;
}
