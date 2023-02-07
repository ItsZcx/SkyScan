/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** if_same_plane
*/

#include "lib.h"

bool if_same_plane(int p_index, int p2_index)
{
    if (p_index == p2_index)
        return (true);
    if (p_index != p2_index)
        return (false);
}
