//Gabriele Fugagnoli

#include "Pezzo.h"
#include "Scacchiera.h"
#include "Casella.h"

void Pezzo::checkLegalMoves(Scacchiera& board, const Casella& pos ){
    for(int j = 0; j<8; j++){
        for(int i = 0; i<8; i++){
            if((board.get_Casella(i, j).get_Pezzo().isWhite()!=white) && this->isLegal(board, pos, board.get_Casella(i, j))) legalMoves.push_back(board.get_Casella(i,j));
        }
    }
}

void Pezzo::recheckLegalMoves (Scacchiera& board, const Casella& pos, const Casella& start, const Casella& end){
    int x = start.get_X();
    int y = start.get_Y();
    if((board.get_Casella(x, y).get_Pezzo().isWhite()!=white) && this->isLegal(board, pos, board.get_Casella(x, y))) legalMoves.push_back(board.get_Casella(x,y));
    else legalMoves.remove(board.get_Casella(x,y));
    x = end.get_X();
    y = end.get_Y();
    if((board.get_Casella(x, y).get_Pezzo().isWhite()!=white) && this->isLegal(board, pos, board.get_Casella(x, y))) legalMoves.push_back(board.get_Casella(x,y));
    else legalMoves.remove(board.get_Casella(x,y));
}