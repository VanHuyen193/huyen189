#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char nhap[100];
    fflush(stdin);
    printf("Nhap vao xau ky tu: ");
    gets(nhap);
    int cout = 0;
    for(int i=0; i<strlen(nhap); i++){
        if(isspace(nhap[i])!=0){
            cout+=1;
        }
    }
    printf("So ki tu trang cua xau la: %d", cout);
    return 0;
}