#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE = 20,
    TIMEOUT = 30
};

void printStatusMessage(enum Status status) {
    switch (status) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
    }
}

int main() {
    enum Status currentStatus = SUCCESS;
    printStatusMessage(currentStatus);
    return 0;
}
