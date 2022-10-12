/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 10.22
\copuright MIT
*/


#include <iostream>
using std::cout;
using std::cin;

class Field{
    private:
        int SZ = 3; // размер поля игры
        char a[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}}; // инициализация массива поля игры
    public:
        Field(){

        }

        void print(void){
                cout << "\e[1:1H\e[2J";// очистка экрана
                for (int i = 0; i < SZ; i++){
                //    cout << "\n" << i << "|";
                    for (int n = 0; n < SZ; n++){
                        cout << a[i][n];
                        if(n+1 < SZ) {
                            cout << " | ";
                        }
                    }
                    if(i+1 < SZ) {
                        cout << "\n-----------\n";
                    }
                }
            //    cout << "\n";
            }

        void step(int m, int k, char s){
                char *p = &a[0][0];
                *(p+m*SZ+k) = s;
                print();
        }

        char check(void){
                char per = 'f';
                bool c = false;
                char *p = &a[0][0];
                for (int i = 0; i < SZ; i++){
                    if ((*(p+i*SZ+0) == *(p+i*SZ+1)) &&\
                        (*(p+i*SZ+0) == *(p+i*SZ+2)) &&\
                        (*(p+i*SZ+0) != ' ')) {
                        c = c || true;
                        per = *(p+i*SZ+0);
                    }
                    else if ((*(p+0*SZ+i) == *(p+1*SZ+i)) &&\
                            (*(p+0*SZ+i) == *(p+2*SZ+i)) &&\
                            (*(p+0*SZ+i) != ' ')) {
                        c = c || true;
                        per = *(p+0*SZ+i);
                    }
                }
                if ((*(p+0*SZ+0) == *(p+1*SZ+1)) &&\
                    (*(p+0*SZ+0) == *(p+2*SZ+2)) &&\
                    (*(p+0*SZ+0) != ' ')) {
                    c = c || true;
                    per = *(p+0*SZ+0);
                }
                else if ((*(p+0*SZ+2) == *(p+1*SZ+1)) &&\
                        (*(p+0*SZ+2) == *(p+2*SZ+0)) &&\
                        (*(p+0*SZ+2) != ' ')) {
                    c = c || true;
                    per = *(p+0*SZ+2);
                }
                return per;
        }
        bool checkField(int m, int k) {
            bool s = false;
            char *p = &a[0][0];
            if (*(p+m*SZ+k) == ' ') {
                s = true;
            };
            return s;
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
