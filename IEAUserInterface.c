#include <stdio.h>
#include <stdlib.h>

#include "IEAKBProcessor.c"

typedef enum {
    MCVIEWKB,
    MCVIEWFB,
    MCAPPLYFC,
    MCAPPLYBC,
    MCEXIT,
    MCVOID
} MenuChoice;

MenuChoice GetMainMenuChoice() {

    MenuChoice selection = MCVOID;
    
    do
    {
    printf("\n %d - Examine Knowledge Base", MCVIEWKB);
    printf("\n %d - Examine Fact Base", MCVIEWFB);
    printf("\n %d - Apply Forward Chain", MCAPPLYFC);
    printf("\n %d - Apply Backward Chain", MCAPPLYBC);
    printf("\n %d - Exit", MCEXIT);
    printf("\nEnter a selection: ");
    scanf("%d", &selection ); 
    
    /* scanf_s("%d", &selection, 1); */
    } while ((selection < 0) || (selection >= MCVOID));
    
    return selection;

}

static void ClearConsole() {
    system("cls");
    system("clear");
}

void main(void) {
    MenuChoice choice = MCVOID;
    
    // Main Menu Logic Controller Loop
    while (1 == 1) {
        ClearConsole();
        printf("KBBase return: %d", GetKBBase());
        if (choice != MCVOID) {
            printf("You have chosen Menu #%d\n", choice);
            printf("\n");

        }
        
        //Exit
        choice = GetMainMenuChoice();
        if(choice == MCEXIT){
            break;
        }
        
    }



}