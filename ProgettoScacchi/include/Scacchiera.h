//Stefano Lattenero

#ifndef SCACCHIERA_H
#define SCACCHIERA_H
#include <ostream>
#include <vector>
#include "Pezzo.h"
using namespace std;

class Pezzo;
class Posizione;

class Scacchiera{

    private:
        vector<vector<Pezzo>> scac;

    public:
        Scacchiera();

        Pezzo& get_Pezzo(Posizione& pos);
        void set_position(Posizione& posInitial, Posizione& posFinal, Pezzo& pezzo);
        friend ostream& operator<<(ostream& os, Scacchiera& scac);
};

#endif
