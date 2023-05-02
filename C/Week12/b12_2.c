#include<stdio.h>

double* maximum(double* a, int size){
    if(size==0){
        return NULL;
    }
    else{
        double *max = a;
        for(int i=0; i<size; i++, a++){
            if(*max<*a){
                max = a;
            }
        }
        return max;
    }
}

int main(){
    int size;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &size);
    double a[size];
    for(int i=0; i<size; i++){
        printf("a[%d] = ", i);
        scanf("%lf", &a[i]);
    }
    double *max = maximum(a, size);
    if(max != NULL){
        printf("So lon nhat trong mang la: %lf", *max);
    }else{
        printf("Mang trong!");
    }
    return 0;
}