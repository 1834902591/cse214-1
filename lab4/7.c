//Split an array at K th (take input k from user) index into two different array

#include<stdio.h>
int main(){
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size_a = 10;
    int b[10], size_b = 0;
    int c[10], size_c = 0;
    int index, i, j;

    scanf("%d",&index);
    if(index > 10){
        printf("Error Input");
    }

    for(i=0; i<index; i++){
        b[i] = a[i];
    }
    size_b = index;
    for(i=index, j=0; i<size_a; i++, j++){
        c[j] = a[i];
    }
    size_c = size_a - index;

    for(i = 0; i < size_a; i++)
    {
        printf("%d ", a[i]);
    }

        printf("\n");

    for(i = 0; i < size_b; i++)
    {
        printf("%d ", b[i]);
    }

        printf("\n");

    for(i = 0; i < size_c; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
