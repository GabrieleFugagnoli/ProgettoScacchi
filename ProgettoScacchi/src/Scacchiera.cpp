//Stefano Lattenero
#include "Scacchiera.h"
#include "PezziDerivati.h"

Scacchiera::Scacchiera()
{
    vector<Pezzo> r1;
    Posizione p;
    Torre t{false, p};
    //r1.push_back(t);          qui da errore
    //scac.push_back(r1);
}