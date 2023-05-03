#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char nhap[100];
    printf("Nhap vao xau ki tu: ");
    fflush(stdin);
    gets(nhap);
    for(int i=0; i<strlen(nhap); i++){
        if(isspace(nhap[i])!=0 && isspace(nhap[i+1])!=0){
            strcpy(&nhap[i], &nhap[i+1]);
            i--;
        }
    }
    printf("%s", nhap);
    return 0;
}