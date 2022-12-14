/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 03.10.22
\copuright MIT
*/

///Подключаем стандартую библиотеку
#include <stdio.h>
#include <math.h>
#include "s001.c"  // Подключаем функцию напрямую, не используя h файл
#include "s002.c"

void start (void) {
    // Задаем переменные
    float a,b,c,x_1,x_2,d;
    printf("\nВведите коэффициент a  ");
    scanf("%f",&a); // Считывание переменной из консоли %f - тип
    printf("\nВведите коэффициент b  ");
    scanf("%f",&b); // символ & - указатель на переменную, а не ее расположение
    printf("\nВведите коэффициент c  ");
    scanf("%f",&c);
    // Решение
    if (a==0) {
        x_1 = -c/b;
        printf("\nОтвет:  %f", x_1);
    }
    else {
        d = s001(a,b,c); // функция вычисления дискриминанта
        if (d<0) {
            printf("\nНет решений");
        }
            else {
                s002(a,b,c,d); // функция вычисления квадратных корней
            }
        }
}
