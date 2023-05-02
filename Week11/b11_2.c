#include<stdio.h>
void swap(int *a, int *b, int *c){
    int temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
int main(){
    int a, b, c;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    swap(&a,&b,&c);
    printf("Sau khi da xoay vong:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d", c);
    return 0;
}