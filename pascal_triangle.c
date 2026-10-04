
#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf("   ");
        }

        int num = 1;

        // Print numbers in each row
        for (int j = 0; j <= i; j++) {
            printf("%6d", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}