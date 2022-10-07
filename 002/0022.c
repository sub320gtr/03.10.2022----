/***
\authors Титов Максим <sub320gtr@gmail.com>
\version 0.0.1a
\date 03.10.22
\copuright MIT
*/

///Подключаем стандартую библиотеку
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include "0022.h"

#define SZ 3
void printSZ (char a[SZ][SZ]);
void printSM (char *p);

void s0022 (void) {
    char a[SZ][SZ] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    printSZ(a);
    printSM(&a[0][0]);
    printSZ(a);
}

void printSZ (char a[SZ][SZ]){
    for (int i = 0; i< SZ; i++){
        for (int n = 0; n<SZ;n++){
            printf(" %c ", a[i][n]);
            if(n+1 < SZ) printf(" | ");
        }
        if(i+1<SZ) printf("\n------------------\n");
    }
}
void printSM (char *p) {
    int i,j;
    printf("\n Введите номер строки: ");
    scanf("%d",&i);
    printf("\n Введите номер столбца: ");
    scanf("%d",&j);
    *(p+i*SZ+j) = '0';
    printf("\n--: %p>>%d: \n\n\n\n", p, *(p+i*SZ+j));
}
