/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 03.10.22
\copuright MIT
*/

///Подключаем стандартую библиотеку
#include <stdio.h>
#include "001.h"

int start (void) {
    /// Задаем переменные a,b,c
    int a = 5;
    int b,c;
    b = a*3;
    c = b-a;
    printf("c = %d;\n", c);
    printf("a = %d;", a);
    printf("b = %d;", b);
    s002();
    return 0;
}

void s002 (void) { // Определение функции
    printf("Введите переменную d (от -10 до 10): ");
    scanf("%d",&d);
    if (d>-10 && d<10) {
        printf("d = %d", d);
        s001(d);/**/
    }
    else {
        printf("Данные введены неверно, попробуйте заново: ");
        s002();
    }
}


void s001 (int a) {
        if (a>0) {
            printf("\nПеременная a: %d , ,больше 0", a);
        }
        else if (a==0) {
            printf("\nПеременная a: %d , ,равно 0", a);
        }
        else {
            printf("\nПеременная a: %d , ,меньше 0", a);
        }

}
