//Gabriele Fugagnoli
#ifndef PARTITA_H
#define PARTITA_H
#include "Scacchiera.h"

class Partita{
    private:
    Scacchiera board;
    bool pc;
    // bool whiteturn variabile che tiene conto di chi e' il turno, non so se servira'
    bool patta_Possibile //indica se e' possibile richiedere una patta

    public:
    //void move(Casella, punto di arrivo) considera la legalita' (compreso lo scacco), chiamera' anche isLegal e poi fara' il test con la board di prova, se legale fara' la mossa
    //void Patta() calcola se ci sono le condizioni per una patta, se si' modifica patta_Possibile
}

#endif
