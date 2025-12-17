/*
Main file for basic-image-generator
IcedPeppermintTea
*/
#include <stdio.h>
#include "jpeglib.h"
#include <stdint.h>

typedef struct pixlRGB
{
    uint8_t rgbRed;
    uint8_t rgbGreen;
    uint8_t rgbBlue;
} pixlRGB;

int main(void)
{
    // variables
    FILE *fptr; 
    int height = 1920;
    int width = 1080;
    uint8_t red = 152;
    uint8_t green = 109;
    uint8_t blue = 227;

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

    // create file
    fptr = fopen("name.jpeg", "w");
    if (fptr == NULL)
    {
        printf("Could not create file.\n");
    }


    // Close files, flush data
    fclose(fptr);
    return 0;
}