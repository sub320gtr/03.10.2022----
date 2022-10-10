/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 10.22
\copuright MIT
*/


#include <iostream>
using std::cout;
using std::cin;
#include "compl.c++"

class Calc{
    private:
        Compl a,b;
    public:
        Calc(){
            float c,d;
            cout << "введите вещественную часть первого комплексного числа:\n";
            cin >> c;
            cout << "введите мнимую часть первого комплексного числа:\n";
            cin >> d;
            a = Compl(c, d);
            a.print();
        }
        ~Calc(){

        }

};
