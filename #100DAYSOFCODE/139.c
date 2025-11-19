#include <stdio.h>

enum Status {
    SUCCESS = 1,
    FAILURE,
    TIMEOUT
};

int main() {
    printf("Status Enum Values:\n");
    printf("SUCCESS: %d\n", SUCCESS);
    printf("FAILURE: %d\n", FAILURE);
    printf("TIMEOUT: %d\n", TIMEOUT);
    return 0;
}
