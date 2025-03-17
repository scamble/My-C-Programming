#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define SIZE 4 void printBoard(int board[SIZE][SIZE]); 
void shuffleBoard(int board[SIZE][SIZE]); 
void swap(int* a, int* b); 
int isValidMove(int row, int col, int newRow, int newCol); 
void makeMove(int board[SIZE][SIZE], 
int row, int col, int newRow, int newCol); 
void getTilePosition(int board[SIZE][SIZE], 
int num, int *row, int *col); 
int main() {     
    int board[SIZE][SIZE] = { 
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16} 
    }; 
    int row, col, newRow, newCol;     char move; 
 
    srand(time(0));     shuffleBoard(board);     while (1) {         printBoard(board);         printf("Enter move (W = up, A = left, S = down, D = right, Q = quit): ");         scanf(" %c", &move);         if (move == 'Q' || move == 'q') {             printf("Exiting the game. Goodbye!\n"); 
            break; 
        }         int tile; 
        printf("Enter the tile number to move: ");         scanf("%d", &tile);         getTilePosition(board, tile, &row, &col);         newRow = row;         newCol = col;         if (move == 'W' && row > 0) newRow = row - 1;         else if (move == 'S' && row < SIZE - 1) newRow = row + 1;         else if (move == 'A' && col > 0) newCol = col - 1;         else if (move == 'D' && col < SIZE - 1) newCol = col + 1; 
 
        if (isValidMove(row, col, newRow, newCol)) {             makeMove(board, row, col, newRow, newCol); 
        } else {             printf("Invalid move. Try again.\n"); 
        } 
    } 
    return 0; 
} 
void printBoard(int board[SIZE][SIZE]) {     printf("\n--- 15 Puzzle ---\n");     for (int i = 0; i < SIZE; i++) { 
        for (int j = 0; j < SIZE; j++) {             if (board[i][j] == 16)                 printf("   ");             else                 printf("%2d ", board[i][j]); 
        } 
        printf("\n"); 
    } 
    printf("\n"); 
} 
void shuffleBoard(int board[SIZE][SIZE]) {     int tempBoard[SIZE][SIZE];     int counter = 1;     for (int i = 0; i < SIZE; i++) {         for (int j = 0; j < SIZE; j++) {             tempBoard[i][j] = counter++; 
        } 
    } 
    tempBoard[SIZE - 1][SIZE - 1] = 16;     int i = SIZE - 1, j = SIZE - 1; 
    for (int moveCount = 0; moveCount < 1000; moveCount++) { 
        int direction = rand() % 4;         int newI = i, newJ = j;         if (direction == 0 && i > 0) newI--; // Move Up         else if (direction == 1 && i < SIZE - 1) newI++; // Move Down         else if (direction == 2 && j > 0) newJ--; // Move Left         else if (direction == 3 && j < SIZE - 1) newJ++; // Move Right         if (newI != i || newJ != j) { 
            swap(&tempBoard[i][j], &tempBoard[newI][newJ]); 
            i = newI;             j = newJ; 
        } 
    } 
    for (int i = 0; i < SIZE; i++)         for (int j = 0; j < SIZE; j++)             board[i][j] = tempBoard[i][j]; 
} 
void swap(int* a, int* b) {     int temp = *a;     *a = *b; 
    *b = temp; 
} 
int isValidMove(int row, int col, int newRow, int newCol) {     return newRow >= 0 && newRow < SIZE && newCol >= 0 && newCol < SIZE; 
} 
void makeMove(int board[SIZE][SIZE], int row, int col, int newRow, int newCol) {     swap(&board[row][col], &board[newRow][newCol]); 
} 
void getTilePosition(int board[SIZE][SIZE], int num, int *row, int *col) {     for (int i = 0; i < SIZE; i++) {         for (int j = 0; j < SIZE; j++) {             if (board[i][j] == num) { 
                *row = i;                 *col = j;                 return; 
            } 
        } 
    } 
} 
