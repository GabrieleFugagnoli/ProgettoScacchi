//Gabriele Fugagnoli

#include "Pezzo.h"
//#include "Scacchiera.h"
//#include "Casella.h"
#include <iostream>
using namespace std;
/*Pezzo::Pezzo(bool w,char n)
{
   white=w;
   name=n;
}
  */  


/*void Pezzo::checkLegalMoves(Scacchiera& board, const Casella& pos ){
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
*/
Pezzo& Pezzo::operator=(const Pezzo& cas){
    white = cas.isWhite();
    name = cas.get_Name();
    //legalMoves = cas.legalMoves;
    return *this;
}/*
Pezzo::Pezzo(const Pezzo& cas) noexcept{
    white = cas.isWhite();
    name = cas.get_Name();
    legalMoves = cas.legalMoves;
}*/
void print_piece(Pezzo & pezzo)
{
   cout<<pezzo.get_Name()<<endl;
}

