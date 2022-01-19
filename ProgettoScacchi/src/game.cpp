//Stefano Lattenero
#include <iostream>
//#include "Scacchiera.h"
//#include "Casella.h"
#include "Pezzo.h"
#include "Pezzo.cpp"
#include "PezziDerivati.h"
#include <vector>
using namespace std;

int main(){
	Torre t1(true);
	print_piece(t1);
	Cavallo c1(false);
	print_piece(c1);
	Pedone p1(false);
	print_piece(p1);
	//Scacchiera scac;
	

	return 0;
	
}
