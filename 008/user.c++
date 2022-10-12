/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 10.22
\copuright MIT
*/

#include "field.c++"
#include <iostream>
#include <time.h>
using std::cout;
using std::cin;

class User{ // Класс игрока
    private:
        char a; // фигура игрока
        Field b; // объект поля
    public:
        User(){

        }

        char choose (void) { // Метод выбора фигуры для игры
            cout << "\nВведите символ для игры: x или 0: \n";
            cout << "\nСимвол для игры:";
            cin >> a;
            return a;
        }

        void stepUser (char p) {
            int m = 0;
            int k = 0;
            cout << "\nВведите номер строки: \n";
            cin >> m;
            cout << "\nВведите номер столбца: \n";
            cin >> k;
            b.step(m,k,p);
        }
        void stepComp (char f) {
            srand(time(NULL));
            int m = 0;
            int k = 0;
            do {
                m = rand() % 3;
                k = rand() % 3;
                //cout << "\n" << m << ":" << k << "\n";
            }while (b.checkField(m,k) == false);
            b.step(m,k,f);
        }
        char checkStep(void) {
            char c = b.check();
            return c;
        }
    };

            /*char s;
            do {
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
                else if (m == '-'){
                    res = a-b;
                    res.print();
                }
                else if ((m == '/') && ((e != 0) || (f != 0))){
                    res = a/b;
                    res.print();
                }
                else if ((m == '/') && ((e == 0) && (f == 0))){
                    cout << "Операция некорректна!\n";
                }
                cout << "\nВведите s для останова, или с для продолжения\n";
                cin >> s;
            } while (s == 'c');
        }
        ~Calc(){

        }*/
