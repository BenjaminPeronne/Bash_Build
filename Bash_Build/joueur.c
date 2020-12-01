/**
 * @author Benjamin Peronne
 * @email contact@benjaminperonne.fr
 * @create date 2020-11-26 20:46:44
 * @modify date 2020-11-26 20:46:44
 * @desc [player]
 */

#include "./Header/prepas.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cleanBuffer() {
    int c = 0;
    while (c != '\n' && c != EOF)
        c = getchar();
}

Player *createPlayer() {
    system("clear");
    // system("cls");  
    Player *p = mallocP(sizeof(Player));
    printf("Enter your name : \n");
    printf("============================\n");
    cleanBuffer();
    fgets(p->name, 20, stdin);
    p->money = 600;
    p->earnings = 0;

    return p;
}