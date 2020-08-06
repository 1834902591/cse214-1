#include<stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    int size = 10, sum = 0;
    double avg;
    int *arr;

    arr = a;

    for(i = 0; i < size; i++){
        sum = sum + *(arr + i);
    }
    avg = (float)sum / i;
        printf("Average = %.2lf",avg);

    return 0;
}
