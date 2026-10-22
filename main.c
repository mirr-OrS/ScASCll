#include <stdio.h>

void renderBoard(piecePOS ***pieceLayer);
void renderAttacks(piecePOS ***pieceLayer, boardState ***board);

typedef enum{
  EMPTY = 0,
  PAWN_W, ROOK_W, KNIGHT_W, BISHOP_W, QUEEN_W, KING_W,
  PAWN_B, ROOK_B, KNIGHT_B, BISHOP_B, QUEEN_B, KING_B
}piecePOS;

typedef enum{
  EMPTY = 0,
  ATTACK_W = 1, ATTACK_B = 2,
  OCCUPIED_W = 4, OCCUPIED_B = 8,
  KING_W = 16, KING_B = 32
}boardState; 

// using OR (|) we can see and note if someone is attacked and where
// to simplify our job, we say pieces can move where they attack, except for pawns

int main(){

  piecePOS pieceLayer[8][8] = 
  {{ROOK_B,   KNIGHT_B,   BISHOP_B,   QUEEN_B,   KING_B,   BISHOP_B,   KNIGHT_B,   ROOK_B},
   {PAWN_B,    PAWN_B,     PAWN_B,    PAWN_B,    PAWN_B,    PAWN_B,     PAWN_B,    PAWN_B},
   {EMPTY,     EMPTY,      EMPTY,     EMPTY,     EMPTY,     EMPTY,      EMPTY,     EMPTY},
   {EMPTY,     EMPTY,      EMPTY,     EMPTY,     EMPTY,     EMPTY,      EMPTY,     EMPTY},
   {EMPTY,     EMPTY,      EMPTY,     EMPTY,     EMPTY,     EMPTY,      EMPTY,     EMPTY},
   {PAWN_W,    PAWN_W,     PAWN_W,    PAWN_W,    PAWN_W,    PAWN_W,     PAWN_W,    PAWN_W},
   {ROOK_W,   KNIGHT_W,   BISHOP_W,   QUEEN_W,   KING_W,   BISHOP_W,   KNIGHT_W,   ROOK_W}};
  boardState AttacksAndMoves[8][8] = {0};

  return 0;
}
