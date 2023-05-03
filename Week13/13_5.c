#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void output(char nhap[100], char a, char b){
    for(int i=0; i<strlen(nhap); i++){
        if(nhap[i]==a){
            nhap[i]=b;
        }
    }
    printf("Out put: %s", nhap);
}
int main(){
    char nhap[100];
    printf("Nhap xau: ");
    fflush(stdin);
    gets(nhap);
    char a, b;
    printf("Nhap ki tu: ");
    scanf("%c %c", &a, &b);
    output(nhap,a,b);
    return 0;
}