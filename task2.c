#include <stdio.h>
#include <unistd.h>  
int main() {
    int N, minutes = 0, seconds = 0;

    printf("Enter the number of minutes: ");
    scanf("%d", &N);

    printf("Stopwatch:\n");

    while (minutes < N || (minutes == N && seconds == 0)) {
        
        printf("%02d : %02d\n", minutes, seconds);

        
        seconds++;

        
        if (seconds == 60) {
            seconds = 0;
            minutes++;
        }

            sleep(1);  
    }

    return 0;
}

