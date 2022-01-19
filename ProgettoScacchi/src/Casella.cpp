//Eduardo Lotto

#include "Casella.h"


bool Casella::operator==(const Casella& cas){
    if(cas.get_X()==this->get_X() && cas.get_Y()==this->get_Y() ) return true;
    return false;
}
