#include <stdio.h>
int main() {
    int i;
    printf("ASCII values of all characters:\n");
    for (i = 0; i <= 127; i++) {
        printf("Character: %c, ASCII Value: %d\n", i, i);
    }
    return 0;
}
