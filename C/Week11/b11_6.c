#include <stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char s1[10], s2[10], s3[20];
    char *p1, *p2, *p3;
    int dem, len3 = 0;
    printf("Nhap chuoi 1: ");
    fflush(stdin); gets(s1);
    printf("Nhap chuoi 2: ");
    fflush(stdin); gets(s2);
    p1=s1; p1=s2; p3=s3;
    for(dem=0; dem<strlen(p1); dem++){
        *(p3 + len3++)=*(p1+dem);
    }
    *(p3+len3)='\0';
    for(dem=0; dem<strlen(p2); dem++){
        *(p3 + len3++)=*(p2+dem);
    }
    *(p3+len3)='\0';
    printf("Noi 2 chuoi: %s", s3);
    getch();

}