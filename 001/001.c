/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 03.10.22
\copuright MIT
*/

///Подключаем стандартую библиотеку
#include <stdio.h>

int start (void) {
    /// Задаем переменные a,b,c
    int a = 5;
    int b,c;
    b = a*3;
    c = b-a;
    printf("c = %d;\n", c);
    printf("a = %d;", a);
    printf("b = %d;", b);
    int d;
    printf("Введите переменную d: ");
    scanf("%d",&d);
    printf("d = %d", d);
    return 0;
}
