#include <iostream>
#include <vector>
#include <utility>

using namespace std;

const int N = 9;

void displaysudoku(int board[N][N]) {
    for (int r = 0; r < N; r++) {
        for (int d = 0; d < N; d++) {
            cout << board[r][d] << " ";
        }
        cout << endl;
    }
}

// setting up sudoku tables for each level of difficulty :
void generateSudoku(int board[N][N], int difficulty) {
    switch (difficulty) {
        case 1: // Easy
            board[0][0] = 0; board[0][1] = 0; board[0][2] = 4; board[0][3] = 5; board[0][4] = 3; board[0][5] = 1; board[0][6] = 6; board[0][7] = 7; board[0][8] = 2;
            board[1][0] = 0; board[1][1] = 5; board[1][2] = 0; board[1][3] = 6; board[1][4] = 0; board[1][5] = 9; board[1][6] = 0; board[1][7] = 0; board[1][8] = 0;
            board[2][0] = 0; board[2][1] = 0; board[2][2] = 3; board[2][3] = 8; board[2][4] = 0; board[2][5] = 0; board[2][6] = 0; board[2][7] = 0; board[2][8] = 9;
            board[3][0] = 8; board[3][1] = 3; board[3][2] = 0; board[3][3] = 4; board[3][4] = 0; board[3][5] = 0; board[3][6] = 1; board[3][7] = 0; board[3][8] = 0;
            board[4][0] = 0; board[4][1] = 0; board[4][2] = 0; board[4][3] = 0; board[4][4] = 0; board[4][5] = 0; board[4][6] = 3; board[4][7] = 9; board[4][8] = 6;
            board[5][0] = 1;board[5][1] = 0; board[5][2] = 0; board[5][3] = 7; board[5][4] = 5; board[5][5] = 0; board[5][6] = 0; board[5][7] = 8; board[5][8] = 0;
            board[6][0] = 0; board[6][1] = 7; board[6][2] = 8; board[6][3] = 0; board[6][4] = 0; board[6][5] = 0; board[6][6] = 0; board[6][7] = 0; board[6][8] = 5;
            board[7][0] = 5; board[7][1] = 6; board[7][2] = 1; board[7][3] = 0; board[7][4] = 7; board[7][5] = 0; board[7][6] = 9; board[7][7] = 2; board[7][8] = 8;
            board[8][0] = 0; board[8][1] = 2; board[8][2] = 0; board[8][3] = 1; board[8][4] = 0; board[8][5] = 0; board[8][6] = 7; board[8][7] = 0; board[8][8] = 3;
            break;
        case 2: //medium

            board[0][0] = 9; board[0][1] = 0; board[0][2] = 4;board[0][3]=0;board[0][4] = 0;board[0][5] = 0;board[0][6] = 6;board[0][7] = 0;board[0][8] = 0;
            board[1][0] = 0; board[1][1] = 0; board[1][2] =0;board[1][3] =9;board[1][4] = 0;board[1][5] = 0;board[1][6] = 0;board[1][7] = 7;board[1][8] = 0;
            board[2][0] = 5; board[2][1] =6; board[2][2] =0;board[2][3] =0;board[2][4] = 4;board[2][5]= 3;board[2][6] = 0;board[2][7] =0 ;board[2][8] = 0;
            board[3][0] = 1; board[3][1] = 7; board[3][2] = 5;board[3][3] =6;board[3][4] = 0;board[3][5] = 4;board[3][6] = 2;board[3][7] = 0;board[3][8] = 9;
            board[4][0] = 0; board[4][1] = 3; board[4][2] = 0;board[4][3] =0;board[4][4] = 0;board[4][5] = 0;board[4][6] = 7;board[4][7] = 0;board[4][8] = 8;
            board[5][0] = 4; board[5][1] = 0; board[5][2] = 8;board[5][3] =3;board[5][4] = 7;board[5][5] = 2;board[5][6] = 1;board[5][7] = 0;board[5][8] = 6;
            board[6][0] = 0; board[6][1] = 0; board[6][2] = 1;board[6][3] =0;board[6][4] = 9;board[6][5] = 7;board[6][6] = 0;board[6][7] = 6;board[6][8] = 0;
            board[7][0] = 0; board[7][1] = 0; board[7][2] = 0;board[7][3] =4;board[7][4] = 0;board[7][5] = 8;board[7][6] = 3;board[7][7] =1;board[7][8] = 0;
            board[8][0] = 0; board[8][1] = 5; board[8][2] = 0;board[8][3] =0;board[8][4] = 0;board[8][5] = 0;board[8][6] = 4;board[8][7] = 0;board[8][8] = 0;

            break;
        case 3: // difficult
            board[0][0] = 2; board[0][1] = 3; board[0][2] = 0;board[0][3] =6;board[0][4] = 0;board[0][5] = 0;board[0][6] = 1;board[0][7] = 0;board[0][8] = 0;
            board[1][0] = 0; board[1][1] = 0; board[1][2] =0;board[1][3] =1;board[1][4] = 0;board[1][5] = 0;board[1][6] = 0;board[1][7] =0;board[1][8] = 0;
            board[2][0] = 0; board[2][1] = 0; board[2][2] =0;board[2][3] =0;board[2][4] = 5;board[2][5]= 7;board[2][6] = 0;board[2][7] =0 ;board[2][8] = 4;
            board[3][0] = 8; board[3][1] = 7; board[3][2] = 0;board[3][3] =2;board[3][4] = 6;board[3][5] = 0;board[3][6] = 4;board[3][7] = 1;board[3][8] = 5;
            board[4][0] = 0; board[4][1] = 0; board[4][2] = 4;board[4][3] =0;board[4][4] = 0;board[4][5] = 0;board[4][6] = 7;board[4][7] = 0;board[4][8] = 0;
            board[5][0] = 0; board[5][1] = 0; board[5][2] = 0;board[5][3] =0;board[5][4] = 0;board[5][5] = 3;board[5][6] = 9;board[5][7] = 2;board[5][8] = 0;
            board[6][0] = 0; board[6][1] = 5; board[6][2] = 0;board[6][3] =9;board[6][4] = 4;board[6][5] = 0;board[6][6] = 8;board[6][7] = 3;board[6][8] = 1;
            board[7][0] = 0; board[7][1] = 0; board[7][2] = 0;board[7][3] =1;board[7][4] = 3;board[7][5] = 0;board[7][6] = 6;board[7][7] =0;board[7][8] = 0;
            board[8][0] = 0; board[8][1] = 1; board[8][2] = 0;board[8][3] =0;board[8][4] = 0;board[8][5] = 0;board[8][6] = 0;board[8][7] = 0;board[8][8] = 0;
            break;
        default:
            cout << "Invalid difficulty level." << endl;
            break;
    }
}

// Function to check if placing 'num' in board[row][col] is valid
bool numValid(int board[N][N], int row, int col, int num) {
    // Check if 'num' is not already placed in the current row, column, or 3x3 subgrid
    for (int i = 0; i < N; i++) {
        if (board[row][i] == num || board[i][col] == num)
            return false;
    }

    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i + startRow][j + startCol] == num)
                return false;
        }
    }

    return true;
}

// Find an empty cell on the board
bool findEmptyCell(int board[N][N], int &row, int &col) {
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (board[row][col] == 0) // 0 means empty cell
                return true;
        }
    }
    return false;
}

// Function for basic backtracking to solve the Sudoku
bool solveSudoku(int board[N][N]) {
    int row, col;
    if (!findEmptyCell(board, row, col)) // No more empty cells means we are done
        return true;

    for (int num = 1; num <= 9; num++) {
        if (numValid(board, row, col, num)) {
            board[row][col] = num; // Tentatively place the number

            if (solveSudoku(board)) // Recursively try to solve the rest
                return true;

            board[row][col] = 0; // Undo the move (backtrack)
        }
    }

    return false; // Trigger backtracking
}

// Utility function to print the board
void printBoard(int board[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
}

int main() {
    int difficulty;
    int board[N][N] = {0}; // Initialize the empty board
    cout << "Please choose the difficulty level:" << endl;
    cout << "1. Easy" << endl;
    cout << "2. Medium" << endl;
    cout << "3. Hard" << endl;
    cin >> difficulty;

    generateSudoku(board, difficulty);
    cout << "SUDOKU PUZZLE:" << endl;
    displaysudoku(board);

    if (solveSudoku(board)) {
        cout << "SOLVED SUDOKU:" << endl;
        printBoard(board); // Print the solved board
    } else {
        cout << "No solution exists." << endl;
    }

    return 0;
}