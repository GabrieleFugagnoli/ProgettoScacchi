//Stefano Lattenero

#ifndef SCACCHIERA_H
#define SCACCHIERA_H


class Casella{
    private:
        int x;
        int y;
        bool empty;
    public:
        Casella(int a, int b)
	        : y{a}, x{b} 
        {}

        bool isEmpty() { return empty; }
};

class Scacchiera{

    private:
        
        const int x_MAX=7;
        const int y_MAX=8;
        object<object<Casella>> scac;

        //enum y{ A , B , C , D , E , F , G , H };

    public:
        Scacchiera(int x_m, int y_m) 
            : x_MAX{x_m}, y_MAX{y_m} 
        {

        }

		void reset_scacchiera() {

        }

};

#endif
