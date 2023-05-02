#include <stdio.h>

void increaseSalary(int *salary, int *startYear, int currentYear) {
    int yearsOfWork = currentYear - *startYear; 

    if (yearsOfWork >= 3) {
        int numOfSalaryIncreases = yearsOfWork / 3; 
        float increaseRate = 0.01; 

        for (int i = 0; i < numOfSalaryIncreases; i++) {
            *salary += (*salary * increaseRate); 
        }

        *startYear = currentYear; 
    }
}

int main() {
    int n; 
    printf("Nhap so luong nhan vien: ");
    scanf("%d", &n);

    int salaries[n]; 
    int startYears[n]; 

    for (int i = 0; i < n; i++) {
        printf("Nhap luong hien tai cua nhan vien %d: ", i + 1);
        scanf("%d", &salaries[i]);

        printf("Nhap nam bat dau lam viec cua nhan vien %d: ", i + 1);
        scanf("%d", &startYears[i]);
    }

    int currentYear; 
    printf("Nhap nam hien tai: ");
    scanf("%d", &currentYear);

    for (int i = 0; i < n; i++) {
        increaseSalary(&salaries[i], &startYears[i], currentYear);
        printf("Luong cua nhan vien %d sau khi tang la: %d\n", i + 1, salaries[i]);
    }

    return 0;
}