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
    FILE *outfile; 
    int height = 480;
    int width = 640;
    uint8_t red = 152;
    uint8_t green = 109;
    uint8_t blue = 227;
    struct pixlRGB image[height][width]; // array to hold all of the rgb values for each pixel
    struct jpeg_compress_struct cinfo;  // Allocate and initialize a JPEG compression object
    struct jpeg_error_mgr jerr;        // Default libjpeg error handling setup

    // store rgb values for each pixel into buffer
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbRed = red;
            image[i][j].rgbGreen = green;
            image[i][j].rgbBlue = blue;
        }
    }

    //Specify the destination for the compressed data (eg, a file)    // create file
    outfile = fopen("name.jpeg", "w"); // TODO : ---- size specification - malloc ?
    if (outfile == NULL)
    {
        printf("Could not create file.\n");
    }
    jpeg_stdio_dest(&cinfo, outfile); // invoke standard destination module

    //Set parameters for compression, including image size & colorspace
    cinfo.err = jpeg_std_error(&jerr); // Store pointer into the 'err' field
    cinfo.image_width = width;
    cinfo.image_height = height;
    cinfo.input_components = 3;
    cinfo.in_color_space = JCS_RGB;
    jpeg_set_defaults(&cinfo); // initialize with standard settings

    

    //jpeg_start_compress(...);
    jpeg_start_compress(&cinfo, TRUE);

    while (cinfo.next_scanline < cinfo.image_height)
    {
       // jpeg_write_scanlines();
    }

    //jpeg_finish_compress(...);
    jpeg_finish_compress(&cinfo);

    //Release the JPEG compression object
    jpeg_destroy_compress(&cinfo);

    // Close files, flush data
    fclose(outfile);
    return 0;
}