#include <stdio.h>

void renderBoard(piecePOS (*pieceLayer)[8]);
void calcAttacks(piecePOS (*pieceLayer)[8], boardState (*board)[8]);

typedef enum{
  EMPTY_SQ = 0,
  PAWN_W, ROOK_W, KNIGHT_W, BISHOP_W, QUEEN_W, KING_W,
  PAWN_B, ROOK_B, KNIGHT_B, BISHOP_B, QUEEN_B, KING_B
}piecePOS;

typedef enum{
  FREE_SQ = 0,
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
  {EMPTY_SQ,  EMPTY_SQ,   EMPTY_SQ,  EMPTY_SQ,  EMPTY_SQ,  EMPTY_SQ,   EMPTY_SQ,  EMPTY_SQ},
  {EMPTY_SQ,  EMPTY_SQ,   EMPTY_SQ,  EMPTY_SQ,  EMPTY_SQ,  EMPTY_SQ,   EMPTY_SQ,  EMPTY_SQ},
  {EMPTY_SQ,  EMPTY_SQ,   EMPTY_SQ,  EMPTY_SQ,  EMPTY_SQ,  EMPTY_SQ,   EMPTY_SQ,  EMPTY_SQ},
  {EMPTY_SQ,  EMPTY_SQ,   EMPTY_SQ,  EMPTY_SQ,  EMPTY_SQ,  EMPTY_SQ,   EMPTY_SQ,  EMPTY_SQ},
   {PAWN_W,    PAWN_W,     PAWN_W,    PAWN_W,    PAWN_W,    PAWN_W,     PAWN_W,    PAWN_W},
   {ROOK_W,   KNIGHT_W,   BISHOP_W,   QUEEN_W,   KING_W,   BISHOP_W,   KNIGHT_W,   ROOK_W}};
  boardState AttacksAndMoves[8][8] = {0};

  return 0;
}

// table colors are: \033[48;5;70m (black) and \033[48;5;15m (white)
void renderBoard(piecePOS (*pieceLayer)[8]){}
/*
color = ["\033[48;5;15m", "\033[48;5;70m"]
oscilator = 0
scale = 2

for i in range(8*scale):
    for j in range(16*scale, 0, -1):
        if j == 16*scale and i%scale == 0:
            oscilator = (oscilator + 1)%2
        if j%(2*scale) == 0:
            oscilator = (oscilator + 1)%2

        print(f"{color[oscilator]} ", end="\033[0m")
    print()

code in python for making the board to scale with perfect squares (aspect ratio 2:1)
*/
