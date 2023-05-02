#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int Tong(int chiso[3]){
    int sum = 0;
    for(int i=0; i<3; i++){
        sum += chiso[i];
    }
    return sum;
}

int ketqua(int dauthu1[3], int dauthu2[3]){
    int sum1 = Tong(dauthu1);
    int sum2 = Tong(dauthu2);
    if(sum1>sum2){
        return 1;
    }else{
        return 2;
    }
}

void thuong(int dauthu1[3], int dauthu2[3]){
    srand(time(NULL));
    int ran = rand() % 1 + 1;
    int nhan = rand() % 101;
    if(ran==1){
        for(int i=0; i<3; i++){
            dauthu1[i] *= (1+(nhan/100));
        }
    }else{
        for(int i=0; i<3; i++){
            dauthu2[i] *= (1+(nhan/100));
        }
    }
}

void capnhat(int dauthu1[3], int dauthu2[3]){
    if(ketqua(dauthu1, dauthu2)==1){
        for(int i=0; i<3; i++){
            dauthu1[i] *= 1.02;
        }
        for(int i=0; i<3; i++){
            dauthu2[i] *= 1.01;
        }
    }else{
        for(int i=0; i<3; i++){
            dauthu2[i] *= 1.02;
        }
        for(int i=0; i<3; i++){
            dauthu1[i] *= 1.01;
        }
    }
    thuong(dauthu1, dauthu2);
}

void arena(int dauthu1[3], int dauthu2[3], int dauthu3[3]){
    int sum1 = Tong(dauthu1);
    int sum2 = Tong(dauthu2);
    int sum3 = Tong(dauthu3);
    int max = (sum1>sum2) ? sum1:sum2;
    max = (max>sum3)?max:sum3;
    if(max==sum1){
        printf("WINNER: 1");
    }else if (max==sum2)
    {
        printf("WINNER: 2");
    }else{
        printf("WINNER: 3");
    }
    
}

int main(){
    srand(time(NULL));
    int dauthu1[3], dauthu2[3], dauthu3[3];
    for(int i=0; i<3; i++){
        dauthu1[i] = rand() % 101;
    }
    for(int i=0; i<3; i++){
        dauthu2[i] = rand() % 101;
    }
    for(int i=0; i<3; i++){
        dauthu3[i] = rand() % 101;
    }
    printf("Dau thu 1: ");
    for(int i=0; i<3; i++){
        printf("%d ", dauthu1[i]);
    }
    printf("\n");
    printf("Dau thu 2: ");
    for(int i=0; i<3; i++){
        printf("%d ", dauthu2[i]);
    }
    printf("\n");
    printf("Dau thu 3: ");
    for(int i=0; i<3; i++){
        printf("%d ", dauthu3[i]);
    }
    printf("\n");
    printf("Nhap so vong: ");
    int vong;
    scanf("%d", &vong);
    int dem=1;
    while(vong>0){
        printf("ROUND %d\n", dem);
        capnhat(dauthu1, dauthu2);
        printf("Dau thu 1: ");
        for(int i=0; i<3; i++){
            printf("%d ", dauthu1[i]);
        }
        printf("\n");
        printf("Dau thu 2: ");
        for(int i=0; i<3; i++){
            printf("%d ", dauthu2[i]);
        }
        printf("\n");
        printf("Dau thu 3: ");
        for(int i=0; i<3; i++){
            printf("%d ", dauthu3[i]);
        }
        printf("\n");
        vong--; dem++;
        if(vong<=0) break;
        printf("ROUND %d\n", dem);
        capnhat(dauthu2, dauthu3);
        printf("Dau thu 1: ");
        for(int i=0; i<3; i++){
            printf("%d ", dauthu1[i]);
        }
        printf("\n");
        printf("Dau thu 2: ");
        for(int i=0; i<3; i++){
            printf("%d ", dauthu2[i]);
        }
        printf("\n");
        printf("Dau thu 3: ");
        for(int i=0; i<3; i++){
            printf("%d ", dauthu3[i]);
        }
        printf("\n");
        vong--; dem++;
        if(vong<=0) break;
        printf("ROUND %d\n", dem);
        capnhat(dauthu3, dauthu1);
        printf("Dau thu 1: ");
        for(int i=0; i<3; i++){
            printf("%d ", dauthu1[i]);
        }
        printf("\n");
        printf("Dau thu 2: ");
        for(int i=0; i<3; i++){
            printf("%d ", dauthu2[i]);
        }
        printf("\n");
        printf("Dau thu 3: ");
        for(int i=0; i<3; i++){
            printf("%d ", dauthu3[i]);
        }
        printf("\n");
        vong--; dem ++;
        if(vong<=0) break;
    }
    arena(dauthu1, dauthu2, dauthu3);
    return 0;
}