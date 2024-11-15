#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &N);

    printf("Pattern using for loop:\n");
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

