/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 03.10.22
\copuright MIT
*/

///Подключаем стандартую библиотеку
#include <stdio.h>
#include "002.h"

int start (void) {
    /// Задаем переменные
    int a,n;
    printf("\nВведите переменную n  ");
    scanf("%d",&n);

    if ( n>0 ) {
        a = s001(n);
        printf("\n Число: %d", a);
    }
    else {
            printf("Данные введены неверно, попробуйте заново: ");
            start();
        }/**/
    return 0;
}
int s001 (int n) {
    if (n==1) {
        return 1;
    }
    else {
        return n*s001(n-1);
    }
}
