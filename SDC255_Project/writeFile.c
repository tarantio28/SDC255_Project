#include <stdio.h>
#include "writeFile.h"

void writeFile() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return;
    }
    fprintf(file, "This is showing that the write function for this project was completed normally.\n");
    fprintf(file, "Data written successfully!\n");
    fclose(file);
    printf("File written successfully.\n");
}
