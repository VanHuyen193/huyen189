#include<stdio.h>

void countEvent(int *arr, int size){
    for(int i=0; i<size; i++){
        if(*(arr+i) % 2 ==0){
            printf("%d ", *(arr+i));
        }
    }
}

int main(){
    int size;
    printf("Nhap vao kich thuoc mang: ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Cac so chan trong mang la: ");
    countEvent(arr, size);
    return 0;
}
