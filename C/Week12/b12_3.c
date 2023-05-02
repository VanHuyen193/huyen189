#include<stdio.h>

void reversearray(int *arr, int size){
    int i, j, tmp;
    i=0; j= size -1;
    while(i<j){
        tmp=*(arr+i);
        *(arr+i)=*(arr+j);
        *(arr+j)= tmp;
        i++; j--;
    }
}

void reversearray1(int arr[], int size){
    int i, j, tmp;
    i=0; j= size -1;
    while(i<j){
        tmp=arr[i];
        arr[i]=arr[j];
        arr[j]= tmp;
        i++; j--;
    }
}

int main(){
    int size;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    reversearray(arr, size);
    printf("Mang dao nguoc la: ");
    for(int i = 0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}