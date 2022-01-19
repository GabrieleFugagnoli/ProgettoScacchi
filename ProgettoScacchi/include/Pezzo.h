//Eduardo Lotto
#ifndef PEZZO_H
#define PEZZO_H
#include <list>

class Casella;

class Scacchiera;

class Pezzo{

    private:

        bool white;     //determina il colore del pezzo
        char name;      //rappresenta il tipo di pezzo nella scacchiera
        std::list <Casella> legalMoves;
        //Pezzo(bool w);

    public:

        //Pezzo();
        
        virtual ~Pezzo();
        
        //disabilitazione copy constructor e operator=
        //per ora li disabilito per evitare i problemi di slicing
        //ma non sono sicuro servirà perchè tutti i pezzi dovrebbero
        //avere le stesse variabili membro
        //Pezzo(const Pezzo&) = delete;
        //Pezzo& operator=(const Pezzo&) = delete;

        bool isWhite() const { return white; }

        char get_Name() const { return name; }

        virtual bool isLegal(Scacchiera& board, const Casella& start, const Casella& end) const;

        void checkLegalMoves (Scacchiera& board, const Casella& start );
        void recheckLegalMoves (Scacchiera& board, const Casella& pos, const Casella& start, const Casella& end);
};

#endif