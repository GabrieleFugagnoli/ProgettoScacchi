//Eduardo Lotto

#include "Casella.h"

Casella::Casella(int a, int b, Pezzo& pezzo, bool em)
    : x{a}, y{b}, piece{pezzo}, isEmpty{em}
{}