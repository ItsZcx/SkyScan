/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** put nbr
*/

#include "lib.h"

int my_put_nbr(int x)
{
    if (x < 0) {
        my_putchar('-');
        x = -x;
    }
    if (x >= 0 && x < 10)
        my_putchar(x + 48);
    else {
        my_put_nbr(x / 10);
        my_putchar(x % 10 + 48);
    }
    return (0);
}
