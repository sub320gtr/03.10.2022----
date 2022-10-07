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
    int a,n,p = 0;
    printf("\nВведите переменную n  ");
    scanf("%d",&n);
    if ( n>0 ) {
        s001(&n, &p);
        printf("\n Число: %d", p);
    }
    else {
            printf("Данные введены неверно, попробуйте заново: ");
            start();
        }/**/
    return 0;
}
void s001 (int *n, int *p) {
    if (*n>1) {
        if ( *p == 0) *p = *n;
        *n = *n - 1;
        *p = *p * *n;
        s001 (n,p);
    }
}
