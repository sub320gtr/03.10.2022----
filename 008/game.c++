/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 10.22
\copuright MIT
*/


#include <iostream>
using std::cout;
using std::cin;

#include "user.c++"

class Game{
    private:
        User b;
    public:
        Game(){
            char d = 's'; // признак окончания игры
            char p; // переменная для выбора символа
            char f; // переменная компьютера
            int k = 0;
            p = b.choose(); // выбор символа с помощью класса игрока
            if (p=='0') {
                f = 'x';
            }
            else f = '0';
            do{
                cout << "\n Номер хода: " << k << "\n";
                b.stepUser(p); // шаг игрока
                d = b.checkStep();
                if (d == 'x') {
                    cout << "\n" << "Победитель X";
                    break;
                }
                else if (d == '0') {
                    cout << "\n" << "Победитель 0";
                    break;
                }
                b.stepComp(f); // шаг компьютера
                d = b.checkStep();
                if (d == 'x') {
                    cout << "\n" << "Победитель X";
                    break;
                }
                else if (d == '0') {
                    cout << "\n" << "Победитель 0";
                    break;
                }
                k = k+1;
            } while (k < 10);
            if (d == 'f') cout << "%dНичья!";
        }
    };
