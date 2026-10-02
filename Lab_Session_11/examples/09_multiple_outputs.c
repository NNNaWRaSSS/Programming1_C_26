#include <stdio.h>
#include <stddef.h>

int calculate(int a, int b, int *sum, int *difference) {
    if (sum == NULL || difference == NULL) {
        return 0;
    }

    *sum = a + b;
    *difference = a - b;
    return 1;
}

int main(void) {
    int sumResult;
    int differenceResult;

    if (calculate(12, 5, &sumResult, &differenceResult)) {
        printf("sum = %d\n", sumResult);
        printf("difference = %d\n", differenceResult);
    } else {
        printf("The output pointers were invalid.\n");
    }

    return 0;
}
