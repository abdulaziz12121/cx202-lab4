#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    

int main() {
    const int grid_size = 10;
    int xt, yt;

    srand(time(NULL));

    xt = rand() % grid_size;
    yt = rand() % grid_size;

    printf("Searching for the treasure in a %dx%d grid...\n", grid_size, grid_size);

    for (int x = 0; x < grid_size; x++) {
        for (int y = 0; y < grid_size; y++) {
            if (x == xt && y == yt) {
                printf("Hurrah! I have found the hidden treasure at (%d, %d)\n", x, y);
                return 0;
            }
        }
    }

    return 0;
}

