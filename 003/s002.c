/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 03.10.22
\copuright MIT
*/

///Подключаем стандартую библиотеку
#include <stdio.h>
#include <math.h>

void s002(float a, float b, float c, float d) {
    float x_1,x_2;
    if (d == 0) {
        x_1 = -b/(2*a);
        printf("\nОтвет:  %f", x_1);
    }
    else {
        x_1 = (-b+sqrt(d))/(2*a);
        x_2 = (-b-sqrt(d))/(2*a);
        printf("\nОтвет:  %f", x_1);
        printf("\nОтвет:  %f", x_2);
    }
}
