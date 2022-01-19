//Gabriele Fugagnoli
#ifndef PEZZIDERIVATI_H
#define PEZZIDERIVATI_H

#include <list>
#include "Pezzo.h"
//#include "Casella.h"

//Dichiarazione delle classi derivate da Pezzo che rappresentano i singoli pezzi in gioco

class Cavallo :  public Pezzo{

    private:
    bool white;
    char name ;
    //std::list <Casella> legalMoves;

    public:
    Cavallo(bool w);
    //bool isLegal(Scacchiera& board, const Casella& start, const Casella& end) const;
    virtual ~Cavallo(){}
    
};

class Alfiere : public Pezzo{

    private:
    bool white;
    char name;
    //std::list <Casella> legalMoves;

    public:
    Alfiere(bool w);
    //bool isLegal(Scacchiera& board, const Casella& start, const Casella& end) const;
    
};

class Torre : public Pezzo{

    private:
    bool white;
    char name;
    //std::list <Casella> legalMoves;

    public:
    Torre(bool w);
    //bool isLegal(Scacchiera& board, const Casella& start, const Casella& end) const;
    
};

class Re : public Pezzo{

    private:
    bool white;
    char name;
    //std::list <Casella> legalMoves;

    public:
    Re(bool w);
    //bool isLegal(Scacchiera& board, const Casella& start, const Casella& end) const;
    
};

class Regina : public Pezzo{

    private:
    bool white;
    char name;
    //std::list <Casella> legalMoves;

    public:
    Regina(bool w);
    //bool isLegal(Scacchiera& board, const Casella& start, const Casella& end) const;
    
};

class Pedone : public Pezzo{
    
    private:
    bool hasMoved;
    bool white;
    char name;
    //std::list <Casella> legalMoves;

    public:
    Pedone(bool w);
    //bool isLegal(Scacchiera& board, const Casella& start, const Casella& end) const;
    
};

#endif
