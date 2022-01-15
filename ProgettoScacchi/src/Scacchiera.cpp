//Stefano Lattenero
#include <iostream>
#include <vector>
#include "Scacchiera.h"
#include <Pezzo.h>
#include "PezziDerivati.h"

using namespace std;
	
Scacchiera::Scacchiera(){
   vector<vector<Casella>> scac;
   vector<Casella> r1;
   Torre t{false};
   Casella t1{0,0,t,false};
   r1.push_back(t1);
   scac.push_back(r1);
 


	
		
}

