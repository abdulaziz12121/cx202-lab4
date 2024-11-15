#include <stdio.h>

int main() {
    int population[10];
    int i, max, min, sum = 0;
    float average;

    
    printf("Enter the population of 10 cities:\n");
    for (i = 0; i < 10; i++) {
        printf("City %d: ", i + 1);
        scanf("%d", &population[i]);
    }

    
    printf("\nPopulation in reverse order:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d ", population[i]);
    }
    printf("\n");

    
    max = min = population[0];

    
    for (i = 0; i < 10; i++) {
        sum += population[i];  
        if (population[i] > max) {
            max = population[i];  
        }
        if (population[i] < min) {
            min = population[i];  
        }
    }

    
    average = sum / 10.0;

    
    printf("\nMaximum population: %d\n", max);
    printf("Minimum population: %d\n", min);
    printf("Average population: %.2f\n", average);

    return 0;
}

