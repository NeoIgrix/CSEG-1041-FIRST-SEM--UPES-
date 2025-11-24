#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date join;
};

int main() {
    struct Employee e;

    // Input format: Employee: Raj | ID: 11 | Joining Date: 12 05 2020
    scanf("Employee: %s | ID: %d | Joining Date: %d %d %d",
          e.name, &e.id, &e.join.day, &e.join.month, &e.join.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d",
           e.name, e.id, e.join.day, e.join.month, e.join.year);

    return 0;
}
