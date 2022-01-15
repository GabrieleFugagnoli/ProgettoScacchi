//Gabriele Fugagnoli
#include  "PezziDerivati.h"
#include "Pezzo.h"
#include "Casella.h"
#include "Scacchiera.h"
#include <cstdlib>


//tutti i metodi isLegal devono essere eseguiti in casella,
//una volta ottenute le coordinate da input e definita la casella 
//avente tali coordinate, si estrae il pezzo e si definisce che mosse puo fare,
// quindi sarà da fare in Scacchiera.cpp
Cavallo::Cavallo(bool w)
    : white{w} {
        name = (w) ? 'c' : 'C';
    }

bool Cavallo::isLegal(Scacchiera&& board, Casella&& start, Casella&& end) const{

    if(end.get_Pezzo().isWhite() == white) return false;

    int delta_x = abs( start.get_X() - end.get_X());
    int delta_y = abs( start.get_Y() - end.get_Y());
    if(delta_x*delta_y == 2) return true;
    else return false; 
}


Torre::Torre(bool w)
    : white{w}{
        name = (w) ? 't' : 'T';
    }

bool Torre::isLegal(Scacchiera&& board, Casella&& start, Casella&& end) const{

    if(end.get_Pezzo().isWhite() == white) return false;

    int delta_x = abs(start.get_X() - end.get_X());
    int delta_y = abs(start.get_Y() - end.get_Y());
    if(delta_x == 0 && delta_y > 0){
        if((start.get_Y() - end.get_Y())<0){//sta andando su
            for(int i = start.get_Y()+1; i<end.get_Y(); i++){
                if(!(board.get_Casella(start.get_X(), i).Empty())) return false;
            }
        } 
        else{ // sta andando giu'
            for(int i = start.get_Y()-1; i>end.get_Y(); i--){
                if(!(board.get_Casella(start.get_X(), i).Empty())) return false;
            }
        }
        return true;
    }
    if(delta_x > 0 && delta_y == 0){
        return true;
    }
    else return false;
}

Alfiere::Alfiere(bool w)
    : white{w} {
        name = (w) ? 'a' : 'A';
    }

bool Alfiere::isLegal(Scacchiera&& board, Casella&& start, Casella&& end) const{

    if(end.get_Pezzo().isWhite() == white) return false;

    int delta_x = abs(start.get_X() - end.get_X());
    int delta_y = abs(start.get_Y() - end.get_Y());
    if(delta_x == delta_y) return true;
    else return false;
}

Re::Re(bool w)
    : white{w}{
        name = (w) ? 'r' : 'R';
    }

bool Re::isLegal(Scacchiera&& board, Casella&& start, Casella&& end) const{

    if(end.get_Pezzo().isWhite() == white) return false;

    int delta_x = abs(start.get_X() - end.get_X());
    int delta_y = abs(start.get_Y() - end.get_Y());
    if((delta_x <= 1) && (delta_y <= 1)) return true;
    else return false;
}    

Regina::Regina(bool w)
    : white{w} {
        name = (w) ? 'd' : 'D';
    }

bool Regina::isLegal(Scacchiera&& board, Casella&& start, Casella&& end) const{

    if(end.get_Pezzo().isWhite() == white) return false;

    int delta_x = abs(start.get_X() - end.get_X());
    int delta_y = abs(start.get_Y() - end.get_Y());
    if((delta_x == 0 && delta_y > 0) || (delta_x > 0 && delta_y == 0) || (delta_x == delta_y)) return true;
    else return false;
}

Pedone::Pedone(bool w)
    : white{w}, hasMoved{false} {
        name = (w) ? 'p' : 'P';
    }

bool Pedone::isLegal(Scacchiera&& board, Casella&& start, Casella&& end) const{

    if(end.get_Pezzo().isWhite() == white) return false;

    int delta_x = abs(start.get_X() - end.get_X());
    int delta_y = abs(start.get_Y() - end.get_Y());
    if((start.get_Pezzo().get_Name() == 'E') && (delta_x == 0) && (delta_y == 1)) return true;
    if((start.get_Pezzo().get_Name() == 'E') && (!hasMoved) && (delta_x == 0) && (delta_y == 2)) return true;
    if((start.get_Pezzo().get_Name() != 'E') && (delta_x == 1) && (delta_y == 1)) return true;
    return false;
}




