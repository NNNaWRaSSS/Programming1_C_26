#include <stdio.h>
#include <stddef.h>

int main(void) {
    int first = 10;
    int second = 20;
    int third = 30;
    int *numberPointers[] = {&first, &second, &third};
    size_t numberCount = sizeof(numberPointers) / sizeof(numberPointers[0]);

    for (size_t i = 0; i < numberCount; i++) {
        printf("numberPointers[%zu] -> %d\n", i, *numberPointers[i]);
    }

    *numberPointers[1] = 99;
    printf("second after pointer update: %d\n", second);

    const char *names[] = {"Zara Ali", "Hana Ali", "Nuha Ali", "Sara Ali"};
    size_t nameCount = sizeof(names) / sizeof(names[0]);

    for (size_t i = 0; i < nameCount; i++) {
        printf("names[%zu] = %s\n", i, names[i]);
    }

    return 0;
}
