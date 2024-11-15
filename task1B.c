#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &N);

    printf("Pattern using while loop:\n");
    int i = 1;
    while (i <= N) {
        int j = 1;
        while (j <= i) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

