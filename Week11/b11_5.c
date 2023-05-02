#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char s1[10];
    int count = 0;
    printf("Nhap chuoi: ");
    fflush(stdin); gets(s1);
    for (int i = 0; i < strlen(s1); i++){
        if(*(s1+strlen(s1)-i-1) = *(s1+i)){
            count++;
        }
    }
    if(count == strlen(s1)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}