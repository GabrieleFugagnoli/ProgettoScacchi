#include "PezziDerivati.h"

class Casella{

    private:
    Posizione pos;
    Pezzo& pez;
    bool isEmpty;

    public:

    //se la casella ha un pezzo allora bisogna mettere nel costruttore il pezzo e
    //false nella variabile isEmpty, se la casella e' vuota mettere un pezzo Empty
    //e mettere true nella variabile isEmpty
    Casella(Posizione& p, Pezzo& pezzo, bool em)
    : pos{p}, pez{pezzo}, isEmpty{em} {}
    
    Posizione& get_Pos() { return pos; }
    Pezzo& get_Pezzo() { return pez; }
    void set_Pezzo(Pezzo& pezzo) { pez = pezzo; }
};