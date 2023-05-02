#include<stdio.h>

void swap(int *x, int *y, int *z){
    int temp;
    temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

void swap2(int **p, int **q, int **r){
    int *temp;
    temp = *p;
    *p = *q;
    *q = *r;
    *r = temp;
}

int main(){
    int x, y, z;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    printf("z = ");
    scanf("%d", &z);
    int *p, *q, *r;
    p = &x;
    q = &y;
    r = &z;
    printf("Gia tri ban dau:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("p = %p\n", p);
    printf("q = %p\n", q);
    printf("r = %p\n", r);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("*r = %d\n", *r);
    swap(&x,&y,&z);
    printf("Gia tri sau khi trao doi x, y, z:\n ");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("p = %p\n", p);
    printf("q = %p\n", q);
    printf("r = %p\n", r);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("*r = %d\n", *r);
    swap2(&p, &q, &r);
    printf("Gia tri sau khi thay doi p, q, r: \n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("p = %p\n", p);
    printf("q = %p\n", q);
    printf("r = %p\n", r);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("*r = %d\n", *r);
    return 0;
}

