/*
** EPITECH PROJECT, 2018
** rush1
** File description:
** rush1
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void longueur(int x)
{
    int compteurL = 0;

    while (compteurL < x) {
        if (compteurL < 1 || compteurL == x - 1)
            my_putchar('o');
        else
            my_putchar('-');
        ++compteurL;
    }
    my_putchar('\n');
}

void hauteur(int y, int x)
{
    int compteurH = 0;
    int ligneH = 0;

    while (0 <= ligneH && ligneH < y - 2) {
        compteurH = 0;
        while (compteurH < x) {
            if (compteurH < 1 || compteurH == x - 1)
                my_putchar('|');
            else {
                my_putchar(' ');
            }
            ++compteurH;
        }
        ++ligneH;
        my_putchar('\n');
    }
}

void rush(int x, int y)
{
    if (x < 0 || y < 0 || x > 2147483647 || y > 2147483647)
        write (2, "Invalid size\n", 14);
    longueur(x);
    hauteur(y, x);
    if (y > 1)
        longueur(x);
}
