/*
Main file for basic-image-generator
IcedPeppermintTea
*/
#include <stdio.h>
#include <stdint.h>

typedef struct pixlRGB
{
    uint32_t rgbRed;
    uint32_t rgbGreen;
    uint32_t rgbBlue;
} pixlRGB;

int main(void)
{
    // variables
    FILE *fptr; 
    int height = 1920;
    int width = 1080;
    uint32_t red;
    uint32_t green;
    uint32_t blue;

    pixlRGB image[height][width]; // array to hold all of the rgb values for each pixel

    // store rgb values for each pixel
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbRed = red;
            image[i][j].rgbGreen = green;
            image[i][j].rgbBlue = blue;
        }
    }

    // get RGB values

    // create file
    fptr = fopen("name.jpeg", "w");
    if (fptr == NULL)
    {
        printf("Could not create file.\n");
    }

        // with RGB values

    // Close files, flush data
    fclose(fptr);
    return 0;
}