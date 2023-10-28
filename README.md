# Knight's Tour Problem Solver

This C++ program solves the Knight's Tour Problem on an 8x8 chessboard using a backtracking algorithm. The goal is to find a sequence of moves for a knight on the chessboard such that it visits every square exactly once.

## How It Works

1. The program starts with an empty chessboard and a knight placed at a specified starting position (0,0).
2. It uses a recursive function to explore all possible knight moves, trying to visit all squares.
3. If a solution is found, it prints the sequence of moves on the chessboard. If no solution exists, it reports that a knight's tour is not possible.

## Usage

Compile the code using a C++ compiler, such as g++, and run the executable. The program will output the knight's tour if one is found or indicate that it's not possible.

## Example Output

If a knight's tour is found, the program will display the chessboard with the sequence of moves. Here's an example:

