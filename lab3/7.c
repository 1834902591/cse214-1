//Calculate the standard deviation of all elements of the given array

#include<stdio.h>
#include<math.h>

int main(){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10, capacity = 10;
    float sd, average, temp, variance;
    int i, sum = 0;

    for(i=0; i<size; i++){
        sum += a[i];
    }

    average = sum / (float) size;

    sum = 0.0;
    for(i=0; i<size; i++){
        temp = a[i] - average;
        sum += pow(temp, 2);
    }

    variance = sum /  (float)size;
    sd = sqrt(variance);
    printf("%lf\n",sd);

    return 0;
}

