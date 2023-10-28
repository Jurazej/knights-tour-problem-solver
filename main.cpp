#include <iostream>
#include <vector>
using namespace std;

const int boardSize = 8;
int board[boardSize][boardSize] = {0};
int moveX[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int moveY[8] = {1, 2, 2, 1, -1, -2, -2, -1};

bool isSafe(int x, int y) {
    return (x >= 0 && x < boardSize && y >= 0 && y < boardSize && board[x][y] == 0);
}

bool solveKnightTour(int x, int y, int move) {
    if (move == boardSize * boardSize) {
        return true; // All squares are visited.
    }

    for (int i = 0; i < 8; i++) {
        int nextX = x + moveX[i];
        int nextY = y + moveY[i];

        if (isSafe(nextX, nextY)) {
            board[nextX][nextY] = move + 1;
            if (solveKnightTour(nextX, nextY, move + 1)) {
                return true; // Recursive call on the next square.
            }
            board[nextX][nextY] = 0; // Backtrack if the path is unsuccessful.
        }
    }

    return false; // No path is found from this square.
}

int main() {
    int startX = 0;
    int startY = 0;

    board[startX][startY] = 1; // Start at the first square.

    if (solveKnightTour(startX, startY, 1)) {
        for (int i = 0; i < boardSize; i++) {
            for (int j = 0; j < boardSize; j++) {
                cout << board[i][j] << "\t";
            }
            cout << endl;
        }
    } else {
        cout << "No knight's tour is possible." << endl;
    }

    return 0;
}
