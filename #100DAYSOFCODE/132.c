#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    for (int i = RED; i <= GREEN; i++) {
        switch (i) {
            case RED:
                printf("Traffic Light %d: Stop\n", i);
                break;
            case YELLOW:
                printf("Traffic Light %d: Wait\n", i);
                break;
            case GREEN:
                printf("Traffic Light %d: Go\n", i);
                break;
        }
    }
    return 0;
}
