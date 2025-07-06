#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "game.h"

void show_main_menu() {
    int choice;
    do {
        printf("\n--- Main Menu ---\n");
        printf("1. Start Game\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                run_game();
                break;
            case 2:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 2);
}