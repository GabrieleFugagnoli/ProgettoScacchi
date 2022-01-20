//Stefano Lattenero
#include <iostream>
#include "Scacchiera.h"
#include "Casella.h"
#include "Pezzo.h"
//#include "Pezzo.cpp"
#include "PezziDerivati.h"
#include "HelperFunctions.h"
#include <vector>
using namespace std;

int main(){
	
	/*
	Torre t1(true);
	print_piece(t1);
	Pedone p1(false);
	print_piece(p1);
	
	
	
	Re r(true);
	Casella cas(1, 2, r, false);
	print_casella(cas);
	
	*/
	
	Regina d(true);
	Casella cas1(1, 2, d, false);
	print_casella(cas1);
	
	Scacchiera scac;
	print_scacchiera(scac);
	return 0;
	
}
