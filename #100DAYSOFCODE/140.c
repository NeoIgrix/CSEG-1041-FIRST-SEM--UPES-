#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

void printGender(enum Gender gender) {
    switch (gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
        default:
            printf("Unknown gender.\n");
    }
}

int main() {
    struct Person person1 = {"Alice", 30, FEMALE};
    struct Person person2 = {"Bob", 25, MALE};

    printGender(person1.gender);
    printGender(person2.gender);

    return 0;
}
