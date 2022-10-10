/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 10.22
\copuright MIT
*/
#include <iostream>
using std::cout; // использование using вне функции

#include "calc.c++"

//Объявляем функцию main
int main (void) {
        Calc();
        return 0;
        /*        Compl a(9.3,-6.7);
                Compl b;
                Compl c;
                Compl d;
                b = a.plus(3,6);
                c = a.plus(b);
                d = c + a + b;
                a.print();
                b.print();
                c.print();
                d.print();
                cout << "Hello World!\n"; //Выводим строку на консоль
                return 0;*/
}
