#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    printf("UserRole Enum Values:\n");
    for (int i = ADMIN; i <= GUEST; i++) {
        printf("Role: %d\n", i);
    }
    return 0;
}
