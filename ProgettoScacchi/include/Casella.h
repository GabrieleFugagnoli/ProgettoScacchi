//Stefano Lattenero
#ifndef CASELLA_H
#define CASELLA_H

#include "Pezzo.h"

class Casella{

    private:
    Pezzo& piece;
    bool isEmpty;
    int x;
    int y;

    public:

    //se la casella ha un pezzo allora bisogna mettere nel costruttore il pezzo e
    //false nella variabile isEmpty, se la casella e' vuota mettere
    //true nella variabile isEmpty
    Casella(int a, int b, Pezzo& pezzo, bool em)
    : x{a}, y{b}, piece{pezzo}, isEmpty{em} {}
    
    Pezzo& get_Pezzo() const { return piece; }

	
    int get_X() const { return x; }
    int get_Y() const { return y; }

    void set_Pezzo(Pezzo& pezzo) { piece = pezzo; }
    Pezzo& get_Pezzo() { return piece; }

    bool Empty() const {return isEmpty; }

    Casella& operator=(const Casella& cas) noexcept;
    Casella(const Casella& cas) noexcept;

    bool operator==(Casella const&);

    ~Casella(){}
};

#endif
