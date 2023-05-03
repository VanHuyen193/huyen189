#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char nhap[100];
    printf("Nhap cau: ");
    fflush(stdin);
    gets(nhap);
    int cout = 0;
    for(int i=0; i<strlen(nhap); i++){
        if(isspace(nhap[i])!=0){
            cout+=1;
        }
    }
    printf("Co %d tu trong cau", cout+1);
    return 0;
}