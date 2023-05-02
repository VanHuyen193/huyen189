#include<stdio.h>
#include<math.h>

double *average(double *arr, int size){
    double avr=0.0;
    for(int i=0; i<size; i++){
        avr += arr[i];
    }
    avr = avr/size;
    double *avrCheck;
    avrCheck = arr;
    double check = fabs(avr - *arr);
    for(int i=0; i<size; i++, arr++){
        if(check>fabs(avr - *arr)){
            check = fabs(avr - *arr);
            avrCheck = arr;
        }
    }
    return avrCheck;
}

int main(){
    int size;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &size);
    double arr[size];
    for(int i=0; i<size; i++){
        printf("arr[%d] = ", i);
        scanf("%lf", &arr[i]);
    }
    double *avrCheck = average(arr, size);
    printf("So gan trung binh nhat la: %lf", *avrCheck);
    return 0;
}