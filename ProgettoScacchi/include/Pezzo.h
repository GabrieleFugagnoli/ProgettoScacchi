//Eduardo Lotto
#ifndef PEZZO_H
#define PEZZO_H



class Scacchiera;

class Pezzo{

    private:

        bool white;     //determina il colore del pezzo
        char name;      //rappresenta il tipo di pezzo nella scacchiera
        //rappresenta la posizione del pezzo nella scacchiera

    public:
        Pezzo();
        Pezzo(bool w);
        
        //disabilitazione copy constructor e operator=
        //per ora li disabilito per evitare i problemi di slicing
        //ma non sono sicuro servirà perchè tutti i pezzi dovrebbero
        //avere le stesse variabili membro
        //Pezzo(const Pezzo&) = delete;
        //Pezzo& operator=(const Pezzo&) = delete;

        bool isWhite() const { return white; }

        char get_Name() const { return name; }
        
        

        virtual bool isLegal(Scacchiera&& board) const;

};

#endif
