#include<stdio.h>

int check(int s1, int s2, int m1[s1], int m2[s2]){
    int count = 0;
    if(s1!=s2){
        return 0;
    }
    else{
        for(int i=0; i<s1; i++){
            if(m1[i]==m2[i]){
                count++;
            }
        }
    }
    if(count==s1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int s1, s2;
    printf("Nhap kich thuoc mang 1: ");
    scanf("%d", &s1);
    int m1[s1];
    printf("Nhap mang 1: ");
    for (int i=0; i<s1; i++){
        scanf("%d", &m1[i]);
    }
    printf("Nhap kich thuoc mang 2: ");
    scanf("%d", &s2);
    int m2[s2];
    printf("Nhap mang 2: ");
    for (int i=0; i<s2; i++){
        scanf("%d", &m2[i]);
    }
    if(check(s1, s2, m1, m2)==1){
        printf("YES!");
    }
    else{
        printf("NO!");
    }
    return 0;
}