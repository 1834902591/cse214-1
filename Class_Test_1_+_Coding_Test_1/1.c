#include<stdio.h>
void output();
int main()
{
    int a[100];
    int i;
    int size;

    output();

    return 0;
}
void output(){
    int a[100];
    int i, j;

    for(i = 0; i < 100; i++)
    {
        scanf("%d",&a[i]);
        if(a[i] == 0){
            printf("OverFlow\n");
            break;
        }
    }
    for(j = 0; j < i; j++){
        printf("%d, ",a[j]);
    }
}
