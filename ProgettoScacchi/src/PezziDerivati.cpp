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

bool Cavallo::isLegal(Scacchiera& board, const Casella& start, const Casella& end) const{

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

bool Torre::isLegal(Scacchiera& board, const Casella& start, const Casella& end) const{

    if(end.get_Pezzo().isWhite() == white) return false;

    int delta_x = abs(start.get_X() - end.get_X());
    int delta_y = abs(start.get_Y() - end.get_Y());

    if(delta_x == 0 && delta_y > 0){//si sposta in verticale
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

    if(delta_x > 0 && delta_y == 0){//si sposta in orizzontale
        if((start.get_X() - end.get_X())<0){//sta andando a destra
            for(int i = start.get_X()+1; i<end.get_X(); i++){
                if(!(board.get_Casella(i, start.get_Y()).Empty())) return false;
            }
        }
        else{//sta andando a sinistra
            for(int i = start.get_X()-1; i>end.get_X(); i--){
                if(!(board.get_Casella(i, start.get_Y()).Empty())) return false;
            }
        }
        return true;
    }
    return false;
}


Alfiere::Alfiere(bool w)
    : white{w} {
        name = (w) ? 'a' : 'A';
    }

bool Alfiere::isLegal(Scacchiera& board, const Casella& start, const Casella& end) const{

    if(end.get_Pezzo().isWhite() == white) return false;

    int delta_x = abs(start.get_X() - end.get_X());
    int delta_y = abs(start.get_Y() - end.get_Y());
    if(delta_x == delta_y && delta_x!=0 && delta_y!= 0){//si sposta in diagonale
        if((start.get_X() - end.get_X())<0 && (start.get_Y() - end.get_Y()<0)){//in alto a destra
            int i = start.get_X()+1;
            int j = start.get_Y()+1;
            while(i<end.get_X() && j<end.get_Y()){
                if(!(board.get_Casella(i,j).Empty())) return false;
                i++;
                j++;
            }
            return true;
        }
        if((start.get_X() - end.get_X())>0 && (start.get_Y() - end.get_Y()<0)){//in alto a sinistra
            int i = start.get_X()-1;
            int j = start.get_Y()+1;
            while(i>end.get_X() && j<end.get_Y()){
                if(!(board.get_Casella(i,j).Empty())) return false;
                i--;
                j++;
            }
            return true;
        }
        if((start.get_X() - end.get_X())>0 && (start.get_Y() - end.get_Y()>0)){//in basso a sinistra
            int i = start.get_X()-1;
            int j = start.get_Y()-1;
            while(i>end.get_X() && j>end.get_Y()){
                if(!(board.get_Casella(i,j).Empty())) return false;
                i--;
                j--;
            }
            return true;
        }
        if((start.get_X() - end.get_X())<0 && (start.get_Y() - end.get_Y()>0)){//in basso a destra
            int i = start.get_X()+1;
            int j = start.get_Y()-1;
            while(i<end.get_X() && j>end.get_Y()){
                if(!(board.get_Casella(i,j).Empty())) return false;
                i++;
                j--;
            }
            return true;
        }
    }
    return false;
}

Re::Re(bool w)
    : white{w}{
        name = (w) ? 'r' : 'R';
    }

bool Re::isLegal(Scacchiera& board, const Casella& start, const Casella& end) const{

    if(end.get_Pezzo().isWhite() == white) return false;

    int delta_x = abs(start.get_X() - end.get_X());
    int delta_y = abs(start.get_Y() - end.get_Y());
    if(delta_x==0 && delta_y==0) return false;
    if((delta_x <= 1) && (delta_y <= 1)) return true;
    else return false;
}    

Regina::Regina(bool w)
    : white{w} {
        name = (w) ? 'd' : 'D';
    }

bool Regina::isLegal(Scacchiera& board, const Casella& start, const Casella& end) const{

    if(end.get_Pezzo().isWhite() == white) return false;

    int delta_x = abs(start.get_X() - end.get_X());
    int delta_y = abs(start.get_Y() - end.get_Y());

    if(delta_x == 0 && delta_y > 0){//si sposta in verticale
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

    if(delta_x > 0 && delta_y == 0){//si sposta in orizzontale
        if((start.get_X() - end.get_X())<0){//sta andando a destra
            for(int i = start.get_X()+1; i<end.get_X(); i++){
                if(!(board.get_Casella(i, start.get_Y()).Empty())) return false;
            }
        }
        else{//sta andando a sinistra
            for(int i = start.get_X()-1; i>end.get_X(); i--){
                if(!(board.get_Casella(i, start.get_Y()).Empty())) return false;
            }
        }
        return true;
    }

    if(delta_x == delta_y && delta_x!=0 && delta_y!= 0){//si sposta in diagonale
        if((start.get_X() - end.get_X())<0 && (start.get_Y() - end.get_Y()<0)){//in alto a destra
            int i = start.get_X()+1;
            int j = start.get_Y()+1;
            while(i<end.get_X() && j<end.get_Y()){
                if(!(board.get_Casella(i,j).Empty())) return false;
                i++;
                j++;
            }
            return true;
        }
        if((start.get_X() - end.get_X())>0 && (start.get_Y() - end.get_Y()<0)){//in alto a sinistra
            int i = start.get_X()-1;
            int j = start.get_Y()+1;
            while(i>end.get_X() && j<end.get_Y()){
                if(!(board.get_Casella(i,j).Empty())) return false;
                i--;
                j++;
            }
            return true;
        }
        if((start.get_X() - end.get_X())>0 && (start.get_Y() - end.get_Y()>0)){//in basso a sinistra
            int i = start.get_X()-1;
            int j = start.get_Y()-1;
            while(i>end.get_X() && j>end.get_Y()){
                if(!(board.get_Casella(i,j).Empty())) return false;
                i--;
                j--;
            }
            return true;
        }
        if((start.get_X() - end.get_X())<0 && (start.get_Y() - end.get_Y()>0)){//in basso a destra
            int i = start.get_X()+1;
            int j = start.get_Y()-1;
            while(i<end.get_X() && j>end.get_Y()){
                if(!(board.get_Casella(i,j).Empty())) return false;
                i++;
                j--;
            }
            return true;
        }
    }
    return false;
}

Pedone::Pedone(bool w)
    : white{w}, hasMoved{false} {
        name = (w) ? 'p' : 'P';
    }

bool Pedone::isLegal(Scacchiera& board, const Casella& start, const Casella& end) const{

    if(end.get_Pezzo().isWhite() == white) return false;

    int delta_x = abs(start.get_X() - end.get_X());
    int delta_y = start.get_Y() - end.get_Y();
    if(start.get_Pezzo().isWhite()){//e' un pezzo bianco
        if((end.Empty()) && (delta_x == 0) && (delta_y == -1)) return true;
        if((end.Empty()) && (!hasMoved) && (delta_x == 0) && (delta_y == -2)) return true;
        if((!end.Empty()) && (delta_x == 1) && (delta_y == -1)) return true;
    }
    else{//e' un pezzo nero
        if((end.Empty()) && (delta_x == 0) && (delta_y == 1)) return true;
        if((end.Empty()) && (!hasMoved) && (delta_x == 0) && (delta_y == 2)) return true;
        if((!end.Empty()) && (delta_x == 1) && (delta_y == 1)) return true;
    }
    return false;
}




