/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** handle_collisions
*/

#include "lib.h"

void handle_collisions(Plane *st_plane, Tower *st_tower, Info *st_amounts)
{
    for (int p_index = 0; p_index < st_plane->plane_amount; p_index++) {
        st_plane[p_index].position = sfRectangleShape_getPosition(
            st_plane[p_index].plane_sprt);
        plane_take_off(st_plane, st_amounts, p_index);
        handle_towers(st_plane, st_tower, st_amounts, p_index);
        handle_planes(st_plane, p_index);
        st_plane[p_index].inside_tower = false;
        check_if_all_died(st_plane, st_amounts, p_index);
    }
}
