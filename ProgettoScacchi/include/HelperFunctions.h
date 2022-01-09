//Gabriele Fugagnoli
#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H
#include <string>
#include <Pezzo.h>
using namespace std;

class Invalid_Argument{};

//Restituisce le coordinate della posizione di partenza della mossa sotto forma di un oggetto di classe Posizione
Posizione extract_start(string arg);

//Restituisce le coordinate della posizione di arrivo della mossa sotto forma di un oggetto di classe Posizione
Posizione extract_finish(string arg);


#endif