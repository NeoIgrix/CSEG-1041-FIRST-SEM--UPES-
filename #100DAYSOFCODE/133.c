#include <stdio.h>

enum Month { JANUARY = 31, FEBRUARY = 28, MARCH = 31, APRIL = 30, MAY = 31, JUNE = 30, JULY = 31, AUGUST = 31, SEPTEMBER = 30, OCTOBER = 31, NOVEMBER = 30, DECEMBER = 31 };

int main() {
    for (int i = JANUARY; i <= DECEMBER; i++) {
        printf("Month %d has %d days\n", i, i);
    }
    return 0;
}
