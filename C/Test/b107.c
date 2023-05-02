#include<stdio.h>
void tang(int arr[100], int s){
    int temp;
    for(int i=0; i<s; i++){
        for(int j=0; j<s-i-1; j++){
        if(arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp; 
        }
        }
    }
}
void giam(int arr[100], int s){
    int temp;
    for(int i=0; i<s; i++){
        for(int j=0; j<s-i-1; j++){
        if(arr[j]<arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp; 
        }
        }
    }
}
int main(){
    printf("Nhap kich thuoc mang: ");
    int s;
    scanf("%d", &s);
    int arr[s];
    printf("Nhap mang: ");
    for (int i=0; i<s; i++){
        scanf("%d", &arr[i]);
    }
    printf("LUA CHON:\n1. Sap xep tang dan\n2. Sap xep giam dan\nBan chon: ");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        tang(arr, s);
        printf("Mang da duoc sap xep la: ");
        for (int i=0; i<s; i++){
        printf("%d ", arr[i]);
        }
        break;
    case 2:
        giam(arr, s);
        printf("Mang da duoc sap xep la: ");
        for (int i=0; i<s; i++){
        printf("%d ", arr[i]);
        }
        break;
    default:
        break;
    }
    return 0;
}