#include <stdio.h>
#include "menu.h"       
#include "mainLoop.h"   

int main() {
    int option;
    do {
        option = menu();
        mainLoop(option);
    } while (option != 5);
    return 0;
}
