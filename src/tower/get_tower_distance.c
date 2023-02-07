/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** get_tower_distance
*/

#include "lib.h"

float get_tower_distance(Plane *st_plane, Tower *st_tower,
    int t_index, int p_index)
{
    float tower_distance = sqrt(pow(abs(((st_plane[p_index].position.y) -
    (st_tower[t_index].circle_pos.y + st_tower[t_index].tower_rad))), 2) +
    pow(abs((st_plane[p_index].position.x) - (st_tower[t_index].circle_pos.x +
    st_tower[t_index].tower_rad)), 2));

    return (tower_distance);
}
