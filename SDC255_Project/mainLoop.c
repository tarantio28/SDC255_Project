#include <stdio.h>

#include "mainLoop.h"
#include "calculateOne.h"
#include "calculateTwo.h"
#include "readFile.h"
#include "writeFile.h"

void mainLoop(int option) {
    switch(option) {
        case 1:
            firstCalculation();
            break;
        case 2:
            secondCalculation();
            break;
        case 3: 
            readFile();
            break;
        case 4: 
            writeFile();
            break;
        case 5:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid selection.\n");
            break;
    }
}
