#include<stdio.h>
int main(){
    int *arr[3];
    for(int i=0; i<3; i++){
        printf("arr[%d] = ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Dia chi cua con tro la: \n");
    for(int i=0; i<3; i++){
        printf("arr[%d] = %p\n", i+1, arr+i);
    }
    return 0;
}