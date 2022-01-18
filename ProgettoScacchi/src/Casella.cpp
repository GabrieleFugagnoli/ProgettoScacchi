//Eduardo Lotto

#include "Casella.h"

Casella::Casella(int a, int b, Pezzo& pezzo, bool em)
    : x{a}, y{b}, piece{pezzo}, isEmpty{em}
{}

bool Casella::operator==(const Casella& cas){
    if(cas.get_X()==this->get_X() && cas.get_Y()==this->get_Y() ) return true;
    return false;
}