#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool check(char *str[10000], int N){
    int count = 0;
    for(int i=0; i<N; i++){
        for(int j=N; j>0; j--){
            if(str[i]==str[j]){
                free(str[i]);
                free(str[j]);
                break;
            }
        }
    }
    if(str == NULL){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    char *str[10000];
    int s;
    printf("Nhap vao do dai xau: ");
    scanf("%d", &s);
    for(int i=0; i<s; i++){
        scanf("%c", &str[i]);
    }
    if(check(str, s)){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}