#include <stdio.h>

void printPuzzle(int puzzle[4][4]) {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(puzzle[i][j] == 0) {
                printf("   ");
            } else {
                printf("%2d ", puzzle[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int puzzle[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 0}
    };
    
    printf("Initial Puzzle State:\n");
    printPuzzle(puzzle);
    
   
    return 0;
#include <stdio.h>

void printPuzzle(int puzzle[4][4]) {
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(puzzle[i][j] == 0) {
                printf("   ");
            } else {
                printf("%2d ", puzzle[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int puzzle[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 0}
    };
    
    printf("Initial Puzzle State:\n");
    printPuzzle(puzzle);
    
     
    
    return 0;
}