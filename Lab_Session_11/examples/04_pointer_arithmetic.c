#include <stdio.h>
#include <stddef.h>

int main(void) {
    int values[] = {10, 100, 200, 300};
    size_t count = sizeof(values) / sizeof(values[0]);
    int *pointer = values;

    for (size_t i = 0; i < count; i++) {
        printf("values[%zu] address = %p, value = %d\n",
               i, (void *)pointer, *pointer);
        pointer++;
    }

    printf("values[2] using indexing: %d\n", values[2]);
    printf("values[2] using pointer arithmetic: %d\n", *(values + 2));

    return 0;
}
