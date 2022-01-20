//Eduardo Lotto

#include "Casella.h"
#include "Pezzo.h"
#include <iostream>

using namespace std;



Casella& Casella::operator=(const Casella& cas) noexcept{
    x = cas.get_X();
    y = cas.get_Y();
    piece = cas.get_Pezzo();
    isEmpty = cas.Empty();
    return *this;
}

/*
bool Casella::operator==(const Casella& cas){
    if(cas.get_X()==this->get_X() && cas.get_Y()==this->get_Y() ) return true;
    return false;
}



 Casella::Casella(Casella const& cas) noexcept
    : piece{cas.get_Pezzo()} {

     isEmpty = cas.Empty();
     x = cas.get_X();
     y = cas.get_Y();
 }*/
