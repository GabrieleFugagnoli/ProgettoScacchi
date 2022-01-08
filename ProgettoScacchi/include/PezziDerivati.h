//Gabriele Fugagnoli

#ifndef PEZZIDERIVATI_H
#define PEZZIDERIVATI_H
#include "Pezzo.h"
#include "Scacchiera.h"

class Cavallo : public Pezzo{

    private:
    bool white;
    Posizione pos;
    char name;

    public:
    Cavallo(bool w, Posizione& p);
    bool isLegal(Scacchiera&& board, Posizione& end) const;
};

class Alfiere : public Pezzo{

    private:
    bool white;
    Posizione pos;
    char name;

    public:
    Alfiere(bool w, Posizione& p);
    bool isLegal(Scacchiera&& board, Posizione& end) const;
};

class Torre : public Pezzo{

    private:
    bool white;
    Posizione pos;
    char name;

    public:
    Torre(bool w, Posizione& p);
    bool isLegal(Scacchiera&& board, Posizione& end) const;
};

class Re : public Pezzo{

    private:
    bool white;
    Posizione pos;
    char name;

    public:
    Re(bool w, Posizione& p);
    bool isLegal(Scacchiera&& board, Posizione& end) const;
};

class Regina : public Pezzo{

    private:
    bool white;
    Posizione pos;
    char name;

    public:
    Regina(bool w, Posizione& p);
    bool isLegal(Scacchiera&& board, Posizione& end) const;
};

class Pedone : public Pezzo{
    
    private:
    bool hasMoved;
    bool white;
    Posizione pos;
    char name;

    public:
    Pedone(bool w, Posizione& p);
    bool isLegal(Scacchiera&& board, Posizione& end) const;
};

class Empty : public Pezzo{

    private:
    char name;

    public:
    Empty()
    : name{'E'} {}
};





#endif