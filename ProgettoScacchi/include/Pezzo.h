//Eduardo Lotto

#ifndef PEZZO_H
#define PEZZO_H

#include "Scacchiera.h"

class Scacchiera;

class Posizione{

    private:
        int x;
        int y;

    public:
        Posizione();
        Posizione(int a, int b)  //non ho messo controlli sulle coordinate perche' saranno fatti nel main
	    : y{a}, x{b} {}

		void set_pos(int a, int b) { y = a; x = b; }
		void set_y(int a) { y = a; }
		void set_x(int b) { x = b; }
		
		int get_y() const { return y; }
		int get_x() const  { return x; }
};

class Pezzo{

    private:

        bool white;     //determina il colore del pezzo
        char name;      //rappresenta il tipo di pezzo nella scacchiera
        Posizione pos;  //rappresenta la posizione del pezzo nella scacchiera

    public:

        Pezzo();
        Pezzo(bool w, Posizione& p);
        
        //disabilitazione copy constructor e operator=
        //per ora li disabilito per evitare i problemi di slicing
        //ma non sono sicuro servirà perchè tutti i pezzi dovrebbero
        //avere le stesse variabili membro
        Pezzo(const Pezzo&) = delete;
        //Pezzo& operator=(const Pezzo&) = delete;

        bool isWhite() const { return white; }

        char get_Name() const { return name; }

        virtual bool isLegal(Scacchiera&& board, Posizione& end) const;

};

#endif
