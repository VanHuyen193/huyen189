#include <stdio.h>
#include <string.h>
#include <ctype.h>

void maHoa(char str[], int step) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (isalpha(str[i])) { 
            if (isupper(str[i])) { 
                str[i] = ((str[i] - 'A') + step) % 26 + 'A';
            }
            else {
                str[i] = ((str[i] - 'a') + step) % 26 + 'a';
            }
        }
    }
}

void giaiMa(char str[], int step) {
    maHoa(str, 26 - step); 
}

int main() {
    char str[1000];
    int step;
    printf("Nhap xau: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    printf("Nhap buoc dich chuyen: ");
    scanf("%d", &step);

    maHoa(str, step);
    printf("Xau sau khi ma hoa: %s\n", str);

    giaiMa(str, step); 
    printf("Xau sau khi giai ma: %s\n", str);

    return 0;
}
