#include<stdio.h>
void cong(int n, int a1[n][n], int a2[n][n]){
    int tong[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            tong[i][j] = a1[i][j] + a2[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", tong[i][j]);
        }
        printf("\n");
    }
}
void hieu(int n, int a1[n][n], int a2[n][n]){
    int hieu[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            hieu[i][j] = a1[i][j] - a2[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", hieu[i][j]);
        }
        printf("\n");
    }
}
void tich(int n, int a1[n][n], int a2[n][n]){
    int tich[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            tich[i][j] = 0;
            for(int k=0; k<n; k++){
                tich[i][j] += a1[i][k] * a2[k][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", tich[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Kich thuoc cua ma tran: ");
    scanf("%d", &n);
    int a1[n][n], a2[n][n];
    printf("Nhap ma tran 1: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a1[i][j]);
        }
    }
    printf("Nhap ma tran 2: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a2[i][j]);
        }
    }
    int choice;
    while(1){
        printf("LUA CHON:\n0.Thoat\n1.Tinh tong\n2.Tinh hieu\n3.Tinh tich\nMoi ban chon: ");
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                printf("Cam on ban da dung chuong trinh.\n");
                return 0;
            case 1:
                cong(n,a1,a2);
                break;
            case 2:
                hieu(n,a1,a2);
                break;
            case 3:
                tich(n,a1,a2);
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;

        }
    }
    return 0;
}