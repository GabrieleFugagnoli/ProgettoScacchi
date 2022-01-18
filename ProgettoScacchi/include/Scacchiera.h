//Stefano Lattenero
#ifndef SCACCHIERA_H
#define SCACCHIERA_H
#include <vector>
#include "Casella.h"

class Scacchiera{

    private:
        std::vector<std::vector<Casella>> scac;
        //const int row=7;
        //const int col=7;

    public:
        Scacchiera();

        Scacchiera(const Scacchiera& arg);

        Casella& get_Casella (int y, int x) { return scac[y][x]; }
};

void print(Scacchiera& scac);

#endif
