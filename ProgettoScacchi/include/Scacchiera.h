//Stefano Lattenero

#ifndef SCACCHIERA_H
#define SCACCHIERA_H
#include <vector>

class Scacchiera{

    private:
        vector<vector<Pezzo>> scac;
        const int x_MAX=7;
        const int y_MAX=7;
        //o si fa la 
        //enum x{ A , B , C , D , E , F , G , H };

    public:
        Scacchiera(int x, int y) 
            : x_MAX{x}, y_MAX{y} 
        {}

		
        Pezzo get_Pezzo(Posizione pos);
        void set_position(Position posInitial, Position posFinal, Pezzo pezzo);
        friend std::ostream& operator<<(std::ostream& os, Scacchiera& scac);
        void reset_scacchiera();


};

#endif
