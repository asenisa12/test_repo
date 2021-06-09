#include "reader.h"
#include <stdio.h>
#include <stdlib.h>

char** read_data(const char *filename, int *rows, int *cols)
{
    char ** data;
    FILE *f = fopen(filename, "r");

    fscanf(f, "%d %d\n", rows, cols);
    data = malloc(*rows * sizeof(char*));
    int i;
    for ( i = 0; i < *rows; i++)
    {
        data[i] = malloc(*cols * sizeof(char));
        //fread(data[i], sizeof(char), *cols, f);
        
        //fgets(data[i], *cols + 1, f);
        //fgetc(f);

        fscanf(f, "%s\n", data[i]);


    }
    
    fclose(f);


    return data;
}
