#include <stdio.h>
#include "readFile.h"

void readFile() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return;
    }
    
    int ch;
    printf("\n File Contents \n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}
