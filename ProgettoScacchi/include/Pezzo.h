//Eduardo Lotto

#ifndef PEZZO_H
#define PEZZO_H

class Pezzo{

    protected:

        bool inGame;    //true se il pezzo è in gioco, altrimenti false
        bool white;     //determina il colore del pezzo
        char name;      //rappresenta il tipo di pezzo nella scacchiera
        Posizione pos;  //rappresenta la posizione del pezzo nella scacchiera

    public:

        bool isWhite() { return white; }

        virtual bool isLegal(Posizione end) = 0;

};

class Posizione{

    private:
        int x;
        int y;

    public:
        Position(int a, int b)  //non ho messo controlli sulle coordinate perche' suppongo li faremo dal main
	        : y{a}, x{b} {}

		void set_pos(int a, int b) { y = a; x = b; }
		void set_y(int a) { y = a; }
		void set_x(int b) { x = b; }
		
		int get_y() const { return y; }
		int get_x() const  { return x; }
};

#endif
