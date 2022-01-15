//Stefano Lattenero
#ifndef SCACCHIERA_H
#define SCACCHIERA_H
#include <vector>
#include "Casella.h"

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
