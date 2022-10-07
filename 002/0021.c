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
#include "0021.h"

void s0021(void) {
    int b[10] = {24,23,22,21,20,19,18,17,16,15};
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    sort(b);

/*   for (i = 0; i<10; i++) {
       //a[i] = (int)(random()*100/RAND_MAX);
        printf("a[%d] = %d\n",i, a[i]);
    }
    for (i=0; i<10e5;i++) {
        k = 0;
        for (j=0;j<9;j++) {
            if (a[j]>a[j+1]) {
                l = a[j];
                a[j] = a[j+1];
                a[j+1] = l;
                k = k+1;
            }
        }
        if (k=0) break;
    }
    for (i = 0; i<10; i++) {
        printf("\na[%d] = %d\n",i, a[i]);
    }*/
}
void sort(int b[10]){
    bool t = false;
    int tmp;
    int i;
    do {
        t = false;
        for(int i = 0; i<9; i++){
            if(b[i]>b[i+1]){
                tmp = b[i];
                b[i] = b[i+1];
                b[i+1] = tmp;
                t = true;
            }
        }
    } while (t);
    for (i = 0; i<10; i++) {
        printf("b[%d] = %d\n",i, b[i]);
    }
}
