/*//Eduardo Lotto
#include <iostream>
#include <algorithm>
#include "Scacchiera.h"
#include "Casella.h"
#include "PezziDerivati.h"


using namespace std;
	
Scacchiera::Scacchiera()
{
   for(int i = 0; i < 8; i++)
   {
      scac.push_back(vector<Casella>{});
   }
   Torre t1{true};
   Casella a1{0, 0, t1, false};
   scac[0].push_back(a1);

   Cavallo cav1{true};
   Casella b1{1, 0, cav1, false};
   scac[0][1] = b1;
    

   Alfiere alf1{true};
   Casella c1{2, 0, alf1, false};
   scac[0][2] = c1;

   Regina reg1{true};
   Casella d1{3, 0, reg1, false};
   scac[0][3] = d1;

   Re r1{true};
   Casella e1{4, 0, r1, false};
   scac[0][4] = e1;

   Alfiere alf2{true};
   Casella f1{5, 0, alf2, false};
   scac[0][5] = f1;

   Cavallo cav2{true};
   Casella g1{6, 0, cav2, false};
   scac[0][6] = g1;

   Torre t2{true};
   Casella h1{7, 0, t2, false};
   scac[0][7] = h1;
   
   //riga pedoni bianchi
   for(int i = 0; i < 8; i++)
   {
      Pedone p{true};
      Casella i2{i, 1, p, false};
      scac[1][i] = i2;
   }

   //caselle vuote
   for(int i = 0; i < 8; i++)
   {
      Pedone e{true};
      Casella i3{i, 2, e, true};
      scac[2][i] = i3;
   }
   for(int i = 0; i < 8; i++)
   {
      Pedone e{true};
      Casella i4{i, 3, e, true};
      scac[3][i] = i4;
   }
   for(int i = 0; i < 8; i++)
   {
      Pedone e{true};
      Casella i5{i, 4, e, true};
      scac[4][i] = i5;
   }
   for(int i = 0; i < 8; i++)
   {
      Pedone e{true};
      Casella i6{i, 5, e, true};
      scac[5][i] = i6;
   }

   //riga pedoni neri
   for(int i = 0; i < 8; i++)
   {
      Pedone p{false};
      Casella i7{i, 6, p, false};
      scac[6][i] = i7;
   }

   Torre t3{false};
   Casella a8{0, 7, t3, false};
   scac[7][0] = a8;

   Cavallo cav3{false};
   Casella b8{1, 7, cav3, false};
   scac[7][1] = b8;

   Alfiere alf3{false};
   Casella c8{2, 7, alf3, false};
   scac[7][2] = c8;

   Regina reg2{false};
   Casella d8{3, 7, reg2, false};
   scac[7][3] = d8;

   Re r2{false};
   Casella e8{4, 7, r2, false};
   scac[7][4] = e8;

   Alfiere alf4{false};
   Casella f8{5, 7, alf4, false};
   scac[7][5] = f8;

   Cavallo cav4{false};
   Casella g8{6, 7, cav4, false};
   scac[7][6] = g8;

   Torre t4{false};
   Casella h8{7, 7, t4, false};
   scac[7][7] = h8;
   
}

Scacchiera::Scacchiera(const Scacchiera& arg)
{
   scac = arg.scac;
}

void print(Scacchiera& scac)
{
   for(int j = 7; j >= 0; j--)
   {
      cout << j+1 << " ";
      for(int i = 0; i < 8; i++)
      {
         if(scac.get_Casella(j, i).Empty()) cout << " ";
         else
            cout << scac.get_Casella(j,i).get_Pezzo().get_Name();
      }
      cout << endl;
   }
   cout << endl;
   cout << "  ABCDEFGH" << endl;
}*/
