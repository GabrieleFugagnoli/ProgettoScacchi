//Gabriele Fugagnoli

#ifndef HELPERFUNCTIONS_H
#define HELPERFUNCTIONS_H
#include <string>
#include "Scacchiera.h"
#include "Casella.h"
#include "Pezzo.h"
using namespace std;

class Invalid_Argument{};
class Scacchiera;

//Restituisce le coordinate della posizione di partenza della mossa 
int extract_start_X(string arg);
int extract_start_Y(string arg);

//Restituisce le coordinate della posizione di arrivo della mossa 
int extract_finish_X(string arg);
int extract_finish_Y(string arg);

void print_piece(Pezzo & pezzo);

void print_casella(Casella & cas);

void print_scacchiera(Scacchiera & scac);

#endif

