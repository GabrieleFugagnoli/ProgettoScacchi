//Gabriele Fugagnoli

#include  "PezziDerivati.h"
#include <cstdlib>

Cavallo::Cavallo(bool w, Posizione& p)
    : white{w}, pos{p} {
        name = (w) ? 'c' : 'C';
    }

bool Cavallo::isLegal(Scacchiera&& board, Posizione& end) const{

    if(board.get_Pezzo(end).isWhite() == white) return false;

    int delta_x = abs(pos.get_x() - end.get_x());
    int delta_y = abs(pos.get_y() - end.get_y());
    if(delta_x*delta_y == 2) return true;
    else return false; 
}

Torre::Torre(bool w, Posizione& p)
    : white{w}, pos{p} {
        name = (w) ? 't' : 'T';
    }

bool Torre::isLegal(Scacchiera&& board, Posizione& end) const{

    if(board.get_Pezzo(end).isWhite() == white) return false;

    int delta_x = abs(pos.get_x() - end.get_x());
    int delta_y = abs(pos.get_y() - end.get_y());
    if((delta_x == 0 && delta_y > 0) || (delta_x > 0 && delta_y == 0)) return true;
    else return false;
}

Alfiere::Alfiere(bool w, Posizione& p)
    : white{w}, pos{p} {
        name = (w) ? 'a' : 'A';
    }

bool Alfiere::isLegal(Scacchiera&& board, Posizione& end) const{

    if(board.get_Pezzo(end).isWhite() == white) return false;

    int delta_x = abs(pos.get_x() - end.get_x());
    int delta_y = abs(pos.get_y() - end.get_y());
    if(delta_x == delta_y) return true;
    else return false;
}

Re::Re(bool w, Posizione& p)
    : white{w}, pos{p} {
        name = (w) ? 'r' : 'R';
    }

bool Re::isLegal(Scacchiera&& board, Posizione& end) const{

    if(board.get_Pezzo(end).isWhite() == white) return false;

    int delta_x = abs(pos.get_x() - end.get_x());
    int delta_y = abs(pos.get_y() - end.get_y());
    if((delta_x <= 1) && (delta_y <= 1)) return true;
    else return false;
}    

Regina::Regina(bool w, Posizione& p)
    : white{w}, pos{p} {
        name = (w) ? 'd' : 'D';
    }

bool Regina::isLegal(Scacchiera&& board, Posizione& end) const{

    if(board.get_Pezzo(end).isWhite() == white) return false;

    int delta_x = abs(pos.get_x() - end.get_x());
    int delta_y = abs(pos.get_y() - end.get_y());
    if((delta_x == 0 && delta_y > 0) || (delta_x > 0 && delta_y == 0) || (delta_x == delta_y)) return true;
    else return false;
}

Pedone::Pedone(bool w, Posizione& p)
    : white{w}, pos{p}, hasMoved{false} {
        name = (w) ? 'p' : 'P';
    }

bool Pedone::isLegal(Scacchiera&& board, Posizione& end) const{

    if(board.get_Pezzo(end).isWhite() == white) return false;

    int delta_x = abs(pos.get_x() - end.get_x());
    int delta_y = abs(pos.get_y() - end.get_y());
    if((board.get_Pezzo(end).get_Name() == 'E') && (delta_x == 0) && (delta_y == 1)) return true;
    if((board.get_Pezzo(end).get_Name() == 'E') && (!hasMoved) && (delta_x == 0) && (delta_y == 2)) return true;
    if((board.get_Pezzo(end).get_Name() != 'E') && (delta_x == 1) && (delta_y == 1)) return true;
    return false;
}




