#include <stdio.h>

int main(){
    int n,*p;
    printf("n = ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++){
        printf("a[%d] = %d\n", n-i, *(a+n-i-1));
    }
}