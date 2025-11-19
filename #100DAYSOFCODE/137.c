#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

void displayRoleMessage(enum UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! Please sign in for more features.\n");
            break;
        default:
            printf("Unknown role.\n");
    }
}

int main() {
    enum UserRole currentRole = USER;
    displayRoleMessage(currentRole);
    return 0;
}
