#include<stdio.h>
int main()
{

    int a[] = {1, 11, 21, 31, 41, 51, 61, 71, 81, 91};
    int i, n;
    int size = 10;
    int tag = 0;
    scanf("%d",&n);

    for(i = 0; i < 10; i++){
        if(a[i] == n){
            printf("Found\n");
            tag = 1;
            break;
        }
    }
    if(tag == 0){
        printf("Not Found\n");
    }
    return 0;
}
