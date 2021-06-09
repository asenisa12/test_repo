#include <stdio.h>
#include <stdlib.h>
#include "reader.h"


int main()
{
    int rows, cols;
   char **data = read_data(
       "test.txt", &rows, &cols);


    for (size_t i = 0; i < rows; i++)
    {
        printf("%s\n", data[i]);
        free(data[i]);
    }

    free(data);
    

    return 0;
}