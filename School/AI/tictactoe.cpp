#include <iostream>
#include <string>

//https://www.geeksforgeeks.org/tic-tac-toe-game-in-cpp/


class tictactoe {

    private:

        char board[3][3];
        
        char currentPlayer;

        bool checkWin() {
            for (int i = 0; i < 3; ++i) {
                if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
                    (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) {
                    return true;
                }
            }
            if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
                (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)) {
                return true;
            }
            return false;
        }


    public:

        tictactoe() {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    board[i][j] = ' ';
                }
            }
            currentPlayer = 'X'; // X always starts
        }

        ~tictactoe() {}

        void displayBoard() {
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    std::cout << board[i][j];
                    if (j < 2) std::cout << "|";
                }
                std::cout << std::endl;
                if (i < 2) std::cout << "-----" << std::endl;
            }
        }

};