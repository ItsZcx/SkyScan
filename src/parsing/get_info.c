/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** get_info_plane
*/

#include "lib.h"

void get_info_tower(char ***arr, Tower *st_tower)
{
    int j_2 = 0;

    for (int j = 0; arr[j]; j++) {
        if (arr[j][0][0] == 'T') {
            st_tower[j_2].tower_pos.x = my_get_float(arr[j][1]);
            st_tower[j_2].tower_pos.y = my_get_float(arr[j][2]);
            st_tower[j_2].tower_rad = (1920 / 100) * my_get_float(arr[j][3]);
            j_2++;
        }
    }
}

void get_info_plane(char ***arr, Plane *st_plane)
{
    int index_2 = 0;

    for (int index = 0; arr[index]; index++) {
        if (arr[index][0][0] == 'A') {
            st_plane[index_2].position.x = my_get_float(arr[index][1]);
            st_plane[index_2].position.y = my_get_float(arr[index][2]);
            st_plane[index_2].plane_finish.x = my_get_float(arr[index][3]);
            st_plane[index_2].plane_finish.y = my_get_float(arr[index][4]);
            st_plane[index_2].plane_vel = my_get_float(arr[index][5]);
            st_plane[index_2].plane_time = my_get_float(arr[index][6]);
            st_plane[index_2].inside_tower = false;
            index_2++;
        }
    }
}

void get_info(char ***arr, Tower *st_tower, Plane *st_plane)
{
    get_info_plane(arr, st_plane);
    get_info_tower(arr, st_tower);
}
