/*
Main file for basic-image-generator
IcedPeppermintTea
*/

#include <stdio.h>

int main(void)
{
    // variables
    FILE *fptr; 

    // get RGB colors

    // store RGBs

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