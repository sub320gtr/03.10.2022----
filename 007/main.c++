/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 10.22
\copuright MIT
*/
#include <iostream>
using std::cout; // использование using вне функции

#include "compl.c++"

//Объявляем функцию main
int main (void) {
        Compl a(9.3,-6.7);
        Compl b;
        Compl c;
        b = a.plus(3,6);
        c = a.plus(b);
        a.print();
        b.print();
        c.print();
        cout << "Hello World!\n"; //Выводим строку на консоль
        return 0;
}
