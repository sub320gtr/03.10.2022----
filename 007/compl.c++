/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 10.22
\copuright MIT
*/


#include <iostream>
using std::cout;

class Compl
{
    private:
        float a; // Действительная часть
        float b; // Мнимая часть
        float r; // Переменная для визуализации комплексного числа с отрицательной мнимой частью
    public:
        Compl(float c, float d){ // Функция конструктор, запускается при определении класса
            a = c;
            b = d;
        }
        Compl(){
            a = 0;
            b = 0;
        }
        Compl plus(float c, float d){
            Compl e(a+c,b+d);
            return e;
        }
        Compl plus(Compl c){
            return c.plus( a, b);
        }
        Compl mult(float c, float d){
            Compl e(a*c - b*d,a*d+b*c);
            return e;
        }
        Compl mult(Compl c){
            return c.mult( a, b);
        }
        void print(void){
            char z;
            if (b < 0){
                z = '-';
                r = b*(-1);
            }
            else {
                z = '+';
                r = b;
            }
            cout << a << z << "j" << r << "\n";
        }
};
Compl operator + (Compl c1, Compl c2) {
    return Compl (c1.plus(c2));
}
Compl operator * (Compl c1, Compl c2) {
    return Compl (c1.mult(c2));
}
