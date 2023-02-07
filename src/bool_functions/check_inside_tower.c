/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** check_inside_tower
*/

#include "lib.h"

bool check_inside_tower(float tower_distance, Tower *st_tower, int t_index)
{
    if (tower_distance < st_tower[t_index].tower_rad)
        return (true);
    if (tower_distance > st_tower[t_index].tower_rad)
        return (false);
}
