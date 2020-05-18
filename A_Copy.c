#include<stdio.h>
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int b[10];
    int i;
    int *p1, *p2;
    p1 = a;
    p2 = b;
    for(i = 0; i < 10; i++){
        printf("%d ",*p1+i);
    }
    printf("\n");
    for(i = 0; i < 10; i++){
        *(p2+i) = *(p1+i);
    }
    for(i = 0; i < 10; i++){
        printf("%d ",*p2+i);
    }
}
