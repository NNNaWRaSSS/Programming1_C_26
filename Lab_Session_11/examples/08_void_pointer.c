#include <stdio.h>

int main(void) {
    int number = 25;
    double measurement = 4.75;

    void *genericPointer = &number;
    printf("integer through void pointer: %d\n", *(int *)genericPointer);

    genericPointer = &measurement;
    printf("double through void pointer: %.2f\n", *(double *)genericPointer);

    return 0;
}
