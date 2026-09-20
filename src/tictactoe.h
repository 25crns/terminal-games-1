#pragma once
#include <array>

using Board = std::array<char, 9>;  // squares 0-8, each 'X', 'O' or ' '

char winner(const Board& board);  // 'X' or 'O' if someone has three in a row, else ' '
bool isFull(const Board& board);
int computerMove(const Board& board, char me, char opponent);  // which square the computer picks
void playTicTacToe();
