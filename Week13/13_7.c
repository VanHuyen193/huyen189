#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void Ma_hoa_phai(char nhap[100]){
    int len = strlen(nhap);
    char last = nhap[len-1];
    char mahoa[100]={0};
    for(int i=1; i<len; i++){
        mahoa[i] = nhap[i-1];
    }
    mahoa[0] = last;
    printf("%s", mahoa);
}
void Ma_hoa_trai(char nhap[100]){
    int len = strlen(nhap);
    char first = nhap[0];
    char mahoa[100] = {0};
    for(int i=0; i<len; i++){
        mahoa[i] = nhap[i+1];
    }
    mahoa[len-1]=first;
    printf("%s", mahoa);
}
int main(){
    char nhap[100];
    printf("Nhap xau: ");
    fflush(stdin);
    gets(nhap);
    printf("Dich phai: ");
    Ma_hoa_phai(nhap);
    printf("\nDich phai: ");
    Ma_hoa_trai(nhap);
    return 0;
}