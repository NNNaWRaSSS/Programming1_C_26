#include <stdio.h>
#include <stddef.h>

void changeByValue(int number) {
    number = 100;
    printf("inside changeByValue: %d\n", number);
}

void changeByPointer(int *number) {
    if (number != NULL) {
        *number = 100;
    }
}

void swapByValue(int first, int second) {
    int temporary = first;
    first = second;
    second = temporary;
    printf("inside swapByValue: first=%d second=%d\n", first, second);
}

void swapByPointer(int *first, int *second) {
    if (first == NULL || second == NULL) {
        return;
    }

    int temporary = *first;
    *first = *second;
    *second = temporary;
}

int main(void) {
    int value = 10;
    changeByValue(value);
    printf("after changeByValue: %d\n", value);

    changeByPointer(&value);
    printf("after changeByPointer: %d\n", value);

    int a = 3;
    int b = 8;
    swapByValue(a, b);
    printf("after swapByValue: a=%d b=%d\n", a, b);

    swapByPointer(&a, &b);
    printf("after swapByPointer: a=%d b=%d\n", a, b);

    return 0;
}
