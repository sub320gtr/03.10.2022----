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
        Compl a,b,res;
    public:
        Calc(){
            float c,d,e,f;
            char m;
            cout << "\e[1:1H\e[2J";
            cout << "введите вещественную часть первого комплексного числа:\n";
            cin >> c;
            cout << "введите мнимую часть первого комплексного числа:\n";
            cin >> d;
            cout << "введите выполняемую операцию:\n";
            cin >> m;
            cout << "введите вещественную часть второго комплексного числа:\n";
            cin >> e;
            cout << "введите мнимую часть второго комплексного числа:\n";
            cin >> f;

            a = Compl(c, d);
                cout << "Первое комплексное число:\n";
                a.print();
            b = Compl(e, f);
                cout << "Второе комплексное число:\n";
                b.print();
            cout << "Результат:\n";
            if (m == '+'){
                res = a+b;
                res.print();
            }
            else if (m == '*'){
                res = a*b;
                res.print();
            }
        }
        ~Calc(){

        }

};
