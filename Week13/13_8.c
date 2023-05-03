#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char vanban[10000];
    printf("Nhap van ban: ");
    fflush(stdin);
    gets(vanban);
    char kitu;
    printf("Nhap ki tu: ");
    scanf("%c", &kitu);
    int cout = 0;
    for(int i=0; i<strlen(vanban); i++){
        if(vanban[i] == kitu){
            cout++;
        }
    }
    printf("So lan xuat hien cua ki tu %c la %d lan", kitu, cout);
    return 0;
}