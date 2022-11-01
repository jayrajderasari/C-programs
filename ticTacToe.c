/*To create a Tick Tac Toe Game*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int player;
int choice;

int checkWin();
void drawBoard();
void markBoard(char mark);

char board[10]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};


int main(){
    int gameStatus = -1;
    char mark;
    player = 1;
    
    while(gameStatus == -1){
        player = (player %2) ? 1 : 2;
        printf("player %d, Enter a number: ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O';
        markBoard(mark);
        gameStatus = checkWin();
        player = ++player;
        drawBoard();
    } 
    
    if (gameStatus == 1) {
        printf("==>\aPlayer %d win ", --player);
    }
    else{
        printf("==>\aGame draw");
    }
    return 0;
}
/**************
-1 game is in progress
0 game is over without result
1 game is over with result
**************/  
int checkWin(){
    int returnValue = 0;
    if (board[1] == board[2] && board[2] == board[3]){
        returnValue = 1;
    }
    else if (board[4] == board[5] && board[5] == board[6]){
        returnValue = 1;
    }
    else if (board[7] == board[8] && board[8] == board[9]){
        returnValue = 1;
    }
    else if (board[1] == board[4] && board[4] == board[7]){
        returnValue = 1;
    }
    else if (board[2] == board[5] && board[5] == board[8]){
        returnValue = 1;
    }
    else if (board[3] == board[6] && board[6] == board[9]){
        returnValue = 1;
    }
    else if (board[1] == board[5] && board[5] == board[9]){
        returnValue = 1;
    }
    else if (board[3] == board[5] && board[5] == board[7]){
        returnValue = 1;
    }
    else if (board[1] != '1' && board[2] != '2' && board[3] != '3' && board[4] != '4' && board[5] != '5' && board[6] != '6' && board[7] != '7' &&board[8] != '8' && board[9] != '9') {
        returnValue = 0;
    }
    else {
        returnValue = -1;
    }
    return returnValue;
}

// To print a board
void drawBoard(){
    system ("clear");
    printf("Welcome to Tick Tac Toe Game!! \nPlayer 1 => X : Player 2 => O\n");
    
    printf("     |     |     |\n");
    printf("  %c  |  %c  |  %c  |\n", board[1], board[2], board[3]);
    printf("_____|_____|_____|\n");
    
    printf("     |     |     |\n");
    printf("  %c  |  %c  |  %c  |\n", board[4], board[5], board[6]);
    printf("_____|_____|_____|\n");
    
    printf("     |     |     |\n");
    printf("  %c  |  %c  |  %c  |\n", board[7], board[8], board[9]);
    printf("_____|_____|_____|\n");
}

// To mark the board
void markBoard(char mark){
    if (choice == 1 && board[1] == '1'){
        board[1] = mark;
    }
    else if (choice == 2 && board[2] == '2'){
        board[2] = mark;
    }
    else if (choice == 3 && board[3] == '3'){
        board[3] = mark;
    }
    else if (choice == 4 && board[4] == '4'){
        board[4] = mark;
    }
    else if (choice == 5 && board[5] == '5'){
        board[5] = mark;
    }
    else if (choice == 6 && board[6] == '6'){
        board[6] = mark;
    }
    else if (choice == 7 && board[7] == '7'){
        board[7] = mark;
    }
    else if (choice == 8 && board[8] == '8'){
        board[8] = mark;
    }
    else if (choice == 9 && board[9] == '9'){
        board[9] = mark;
    }
    else{
        printf("Invalid");
        player--;
        getch();
    }
}
