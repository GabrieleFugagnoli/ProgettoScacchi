//Gabriele Fugagnoli

#ifndef PEZZIDERIVATI_H
#define PEZZIDERIVATI_H
#include "Pezzo.h"

class Pezzo;
class Scacchiera;

//Dichiarazione delle classi derivate da Pezzo che rappresentano i singoli pezzi in gioco



class Cavallo :  public Pezzo{

    private:
    bool white;
    char name;

    public:
    Cavallo(bool w);
    bool isLegal(Scacchiera&& board) const;
};

class Alfiere : public Pezzo{

    private:
    bool white;
    char name;

    public:
    Alfiere(bool w);
    bool isLegal(Scacchiera&& board) const;
};

class Torre : public Pezzo{

    private:
    bool white;
    char name;

    public:
    Torre(bool w);
    bool isLegal(Scacchiera&& board) const;
};

class Re : public Pezzo{

    private:
    bool white;
    char name;

    public:
    Re(bool w);
    bool isLegal(Scacchiera&& board) const;
};

class Regina : public Pezzo{

    private:
    bool white;
    char name;

    public:
    Regina(bool w);
    bool isLegal(Scacchiera&& board) const;
};

class Pedone : public Pezzo{
    
    private:
    bool hasMoved;
    bool white;
    char name;

    public:
    Pedone(bool w);
    bool isLegal(Scacchiera&& board,bool hasM) const;
};



#endif
