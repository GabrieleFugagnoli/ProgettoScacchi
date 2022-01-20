//Stefano Lattenero
#ifndef CASELLA_H
#define CASELLA_H

#include "Pezzo.h"
#include "PezziDerivati.h"

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

    int get_X() const { return x; }
    int get_Y() const { return y; }
    Pezzo& get_Pezzo() const{ return piece; }
    bool Empty() const {return isEmpty; }

    Casella& operator=(const Casella& cas) noexcept;
    /*
    Pezzo& get_Pezzo() const { return piece; }

	
   

    void set_Pezzo(Pezzo& pezzo) { piece = pezzo; }
    

    

    
    Casella(const Casella& cas) noexcept;

    bool operator==(Casella const&);

    ~Casella(){}
    */
};


#endif
