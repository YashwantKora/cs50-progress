#include <stdio.h>

int main(void) {
    int x;
    int y;

    printf("What's x?\n");
    scanf("%i", &x);

    printf("What's y?\n");
    scanf("%i", &y);

    if (x < y) {
        printf("%i is less than %i", x, y);
    }
    else if (x > y) {
        printf("%i is greater than %i", x, y);
    }
    else {
        printf("%i is equal to %i", x, y);
    }
    return 0;
}