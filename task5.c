#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 10
#define HEIGHT 10

int main() {
    int image[HEIGHT][WIDTH][3];  
    int grayscale[HEIGHT][WIDTH]; 
    int i, j;
    
    
    srand(time(0));

  
    printf("Original RGB values and Grayscale values:\n");
    for (i = 0; i < HEIGHT; i++) {
        for (j = 0; j < WIDTH; j++) {
            
            image[i][j][0] = rand() % 256; 
            image[i][j][1] = rand() % 256; 
            image[i][j][2] = rand() % 256; 

            
            grayscale[i][j] = (int)(0.299 * image[i][j][0] + 
                                    0.587 * image[i][j][1] + 
                                    0.114 * image[i][j][2]);

            
            printf("RGB(%3d, %3d, %3d) -> Grayscale(%3d)   ", 
                    image[i][j][0], image[i][j][1], image[i][j][2], grayscale[i][j]);
        }
        printf("\n");
    }

    return 0;
}

