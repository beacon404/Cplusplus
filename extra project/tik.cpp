#include <iostream>
#include <vector>

// Function to display the Tic-Tac-Toe board
void displayBoard(const std::vector<std::vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            std::cout << cell << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

// Function to check if a player has won
bool checkWin(const std::vector<std::vector<char>>& board, char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

// Function to check if the board is full (resulting in a tie)
bool isBoardFull(const std::vector<std::vector<char>>& board) {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false;
            }
        }
    }
    return true;
}

// Function to play the Tic-Tac-Toe game
void playTicTacToe() {
    std::vector<std::vector<char>> board(3, std::vector<char>(3, ' '));
    char currentPlayer = 'X';

    while (true) {
        // Display the current state of the board
        displayBoard(board);

        // Get player move
        int row, col;
        std::cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        std::cin >> row >> col;

        // Check if the move is valid
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            std::cout << "Invalid move. Try again." << std::endl;
            continue;
        }

        // Make the move
        board[row][col] = currentPlayer;

        // Check if the current player wins
        if (checkWin(board, currentPlayer)) {
            displayBoard(board);
            std::cout << "Player " << currentPlayer << " wins!" << std::endl;
            break;
        }

        // Check for a tie
        if (isBoardFull(board)) {
            displayBoard(board);
            std::cout << "The game is a tie!" << std::endl;
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}

int main() {
    std::cout << "Welcome to Tic-Tac-Toe!" << std::endl;
    playTicTacToe();
    return 0;
}
