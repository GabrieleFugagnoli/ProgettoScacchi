//Gabriele Fugagnoli

#include "HelperFunctions.h"
#include <string>
#include <iostream>
#include "Scacchiera.h"
#include "Casella.h"
#include "Pezzo.h"
using namespace std;

/*
//Restituisce le coordinate della posizione di partenza della mossa sotto forma di un oggetto di classe Posizione
int extract_start_X(string arg){
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

    return x;
}

int extract_start_Y(string arg){
    int y = arg[1] - '0';
    return y;
}

//Restituisce le coordinate della posizione di arrivo della mossa sotto forma di un oggetto di classe Posizione
int extract_finish_X(string arg){
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

    return x;
}

int extract_finish_Y(string arg){
int y = arg[4] - '0';
return y;
}*/

void print_piece(Pezzo & pezzo)
{
   cout<<pezzo.get_Name()<<endl;
}

void print_casella(Casella & cas){
    cout<<"Nome pezzo: ";
    cout<<cas.get_Pezzo().get_Name()<<endl;
    cout<<"Posizione x: ";
    cout<<cas.get_X()<<endl;
    cout<<"Posizione y: ";
    cout<<cas.get_Y()<<endl;
    cout<<"Casella vuota: ";
    cout<<cas.Empty()<<endl;
}

void print_scacchiera(Scacchiera& scac)
{
   for (int i = 0; i<8; i++){
    cout<< scac.get_Casella(0,i).get_Pezzo().get_Name() <<endl;
   }
}