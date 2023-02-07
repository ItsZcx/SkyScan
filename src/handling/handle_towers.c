/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** handle_towers
*/

#include "lib.h"

void plane_tower_status(Plane *st_plane, Tower *st_tower,
    int t_index, int p_index)
{
    float tower_distance = get_tower_distance(
        st_plane, st_tower, t_index, p_index);

    if (!is_plane_inside_tower(st_plane, p_index) &&
        !is_plane_dead(st_plane, p_index) &&
        !is_plane_not_flying(st_plane, p_index) &&
        check_inside_tower(tower_distance, st_tower, t_index)) {
        st_plane[p_index].life = INSIDE_TOWER;
        st_plane[p_index].inside_tower = true;
    } else if (!is_plane_inside_tower(st_plane, p_index) &&
        status_inside_tower(st_plane, p_index) &&
        !check_inside_tower(tower_distance, st_tower, t_index)) {
        st_plane[p_index].life = FLYING;
        st_plane[p_index].inside_tower = false;
    }
}

void handle_towers(Plane *st_plane, Tower *st_tower,
    Info *st_amounts, int p_index)
{
    for (int t_index = 0; t_index < st_amounts->amount_towers; t_index++)
        plane_tower_status(st_plane, st_tower, t_index, p_index);
}
