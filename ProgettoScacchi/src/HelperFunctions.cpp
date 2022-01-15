//Gabriele Fugagnoli
/*
#include "HelperFunctions.h"
#include <string>
#include "Scacchiera.h"
using namespace std;

//Restituisce le coordinate della posizione di partenza della mossa sotto forma di un oggetto di classe Posizione
Casella extract_start(string arg){
    const char firstCoordinate = arg[0];
    int x;
    if(firstCoordinate == 'a' || firstCoordinate == 'A') x = 1;
    else if(firstCoordinate == 'b' || firstCoordinate == 'B') x = 2;
    else if(firstCoordinate == 'c' || firstCoordinate == 'C') x = 3;
    else if(firstCoordinate == 'd' || firstCoordinate == 'D') x = 4;
    else if(firstCoordinate == 'e' || firstCoordinate == 'E') x = 5;
    else if(firstCoordinate == 'f' || firstCoordinate == 'F') x = 6;
    else if(firstCoordinate == 'g' || firstCoordinate == 'G') x = 7;
    else if(firstCoordinate == 'h' || firstCoordinate == 'H') x = 8;
    else throw Invalid_Argument();

    int y = arg[1] - '0';
    return Scacchiera.at(x).at(y);
}

//Restituisce le coordinate della posizione di arrivo della mossa sotto forma di un oggetto di classe Posizione
Casella extract_finish(string arg){
    const char firstCoordinate = arg[3];
    int x;
    if(firstCoordinate == 'a' || firstCoordinate == 'A') x = 1;
    else if(firstCoordinate == 'b' || firstCoordinate == 'B') x = 2;
    else if(firstCoordinate == 'c' || firstCoordinate == 'C') x = 3;
    else if(firstCoordinate == 'd' || firstCoordinate == 'D') x = 4;
    else if(firstCoordinate == 'e' || firstCoordinate == 'E') x = 5;
    else if(firstCoordinate == 'f' || firstCoordinate == 'F') x = 6;
    else if(firstCoordinate == 'g' || firstCoordinate == 'G') x = 7;
    else if(firstCoordinate == 'h' || firstCoordinate == 'H') x = 8;
    else throw Invalid_Argument();

    int y = arg[4] - '0';

    return Scacchiera[x][y];
}
*/
