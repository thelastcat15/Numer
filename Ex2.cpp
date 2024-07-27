#include <stdio.h>
#include <math.h>

int main() {
    int rangeLimit = 100;
    double errorLimit = 0.00001;

    double oldX = 1.0;
    for (int i = 0; i < rangeLimit; i++) {
        double temp = ((7.0 / oldX) + oldX) / 2.0;
        double error = fabs(temp - oldX);
        printf("[%.11f] Error : %.11f\n", temp, error);
        if (-0.00001 <= error && error <= 0.00001) {
            break;
        }
        oldX = temp;
    }
    return 0;
}


