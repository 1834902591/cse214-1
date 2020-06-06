//Calculate the average of all elements of the given array

#include<stdio.h>
int main()
{
    int a[10] = {2,7,2,6,4,9,3,4,10,25};
    double size = 10;
    int i, sum = 0;
    double avg;

    for(i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }

    avg = sum / size;
    printf("%0.2lf",avg);

    return 0;
}



