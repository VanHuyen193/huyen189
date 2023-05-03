#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char nhap[100];
    printf("Nhap ten: ");
    fflush(stdin);
    gets(nhap);
    char *tro = strrchr(nhap, 32);
    tro++;
    while(*tro!='\0'){
        printf("%c", *tro);
        tro++;
    }
    return 0;
}