#include <stdio.h>

int main(void) {
    int values[] = {4, 8, 15, 16, 23, 42};
    int *current = values;
    int *end = values + (sizeof(values) / sizeof(values[0]));

    while (current < end) {
        printf("address = %p, value = %d\n", (void *)current, *current);
        current++;
    }

    if (current == end) {
        printf("The pointer has reached one position past the array.\n");
    }

    return 0;
}
