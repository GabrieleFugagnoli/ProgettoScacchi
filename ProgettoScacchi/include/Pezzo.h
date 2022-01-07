//Eduardo Lotto

#ifndef PEZZO_H
#define PEZZO_H

class Posizione{

    private:
        unsigned int x;
        unsigned int y;

    public:
        Posizione(unsigned int a, unsigned int b)  //non ho messo controlli sulle coordinate perche' saranno fatti nel main
	        : y{a}, x{b} {}

		void set_pos(unsigned int a, unsigned int b) { y = a; x = b; }
		void set_y(unsigned int a) { y = a; }
		void set_x(unsigned int b) { x = b; }
		
		unsigned int get_y() const { return y; }
		unsigned int get_x() const  { return x; }
};

class Pezzo{

    protected:

        bool inGame;    //true se il pezzo è in gioco, altrimenti false
        bool white;     //determina il colore del pezzo
        char name;      //rappresenta il tipo di pezzo nella scacchiera
        Posizione pos;  //rappresenta la posizione del pezzo nella scacchiera

    public:

        Pezzo(bool g, bool w, char n, Posizione p);
        
        //disabilitazione copy constructor e operator=
        //per ora li disabilito per evitare i problemi di slicing
        //ma non sono sicuro servirà perchè tutti i pezzi dovrebbero
        //avere le stesse variabili membro
        Pezzo(const Pezzo&) = delete;
        Pezzo& operator=(const Pezzo&) = delete;

        bool isWhite() { return white; }

        bool isInGame() { return inGame; }

        char getName() { return name; }

        virtual bool isLegal(Scacchiera Board, Posizione end) = 0;

};

#endif
