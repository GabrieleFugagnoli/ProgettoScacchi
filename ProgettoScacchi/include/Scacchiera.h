//Stefano Lattenero
#ifndef SCACCHIERA_H
#define SCACCHIERA_H
#include <vector>
#include "Pezzo.h"
class Pezzo;


class Casella{

    private:
    Pezzo& piece;
    bool isEmpty;
    int x;
    int y;

    public:

    //se la casella ha un pezzo allora bisogna mettere nel costruttore il pezzo e
    //false nella variabile isEmpty, se la casella e' vuota mettere un pezzo Empty
    //e mettere true nella variabile isEmpty
    Casella(int a, int b, Pezzo& pezzo, bool em)
    : x{a}, y{b}, piece{pezzo}, isEmpty{em} {}
    
    Pezzo& get_Pezzo() { return piece; }
    int& get_X(){return x;}
    int& get_Y(){return y;}
    void set_Pezzo(Pezzo& pezzo) { piece = pezzo; }
    
};


class Scacchiera{

    private:
        std::vector<std::vector<Casella>> scac;
        const int row=7;
        const int col=7;
        //o si fa la 
        //enum x{ A , B , C , D , E , F , G , H };

    public:
        Scacchiera();

	
        //Pezzo& get_Piece(Casella& casella){ return casella.get_Pezzo; };
        //void set_position(Posizione& posInitial, Posizione& posFinal, Pezzo& pezzo);
        //void print(Scacchiera& scac);
	

};

#endif
