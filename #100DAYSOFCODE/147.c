#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    
    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter Employee Name: ");
    scanf("%s", e1.name);

    printf("Enter Salary: ");
    scanf("%f", &e1.salary);

    
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    
    printf("\n--- Employee Data Read From File ---\n");
    printf("ID: %d\n", e2.id);
    printf("Name: %s\n", e2.name);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}
