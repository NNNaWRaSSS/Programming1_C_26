#include <stdio.h>

int main(void) {
    int score = 75;
    int *pointer = &score;

    printf("score value: %d\n", score);
    printf("score address: %p\n", (void *)&score);
    printf("address stored in pointer: %p\n", (void *)pointer);
    printf("value through pointer: %d\n", *pointer);

    *pointer = 90;
    printf("score after pointer update: %d\n", score);

    return 0;
}
