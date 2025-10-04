#include <stdio.h>
#include "menu.h" 

int menu() {
    int choice;
    printf("\n Main Menu \n");
    printf("1. Run first calculation\n");
    printf("2. Run second calculation\n");
    printf("3. Read from file\n");
    printf("4. Write to file\n");
    printf("5. Exit\n");
    printf("Select an option (1-5): ");
    scanf("%d", &choice);
    return choice;
}
