/*
** EPITECH PROJECT, 2023
** B-MUL-100-BAR-1-1-myradar-joan-pau.merida-ruiz
** File description:
** main
** musica
*/

#include "lib.h"

void SkyScan(char ***arr, Info *st_amounts)
{
    Win *st_win = malloc(sizeof(Win));
    Plane *st_plane = malloc(sizeof(Plane) * st_amounts->amount_planes);
    Tower *st_tower = malloc(sizeof(Tower) * st_amounts->amount_towers);
    s_sound *st_sound = malloc(sizeof(s_sound));
    // sound_struct(st_sound); You can uncomment the sounds but it is from a game, which doesn't fit the actual background nor the sprites (1/2)

    get_info(arr, st_tower, st_plane);
    call_structs(st_win, st_plane, st_tower, st_amounts);
    sfRenderWindow_setFramerateLimit(st_win->wind, 60);
    while (sfRenderWindow_isOpen(st_win->wind) && st_amounts->alive) {
        st_amounts->alive = st_plane->plane_amount;
        do_events(st_win, st_amounts);
        handle_collisions(st_plane, st_tower, st_amounts);
        update_clock(st_amounts);
        screen_loop(st_win, st_plane, st_tower, st_amounts);
    }
    do_frees(st_win, st_plane, st_tower, st_amounts);
    // destroy_sound(st_sound); (2/2)
}

int main(int ac, char **av)
{
    Info *st_amounts = malloc(sizeof(Info));

    if (help(ac, av) == 1)
        return (0);
    if (error_handle(ac, av) == 84)
        return (84);
    char ***arr = read_map(ac, av, st_amounts);
    if (arr_error_handle(st_amounts, arr) == 84)
        return (84);
    SkyScan(arr, st_amounts);
    return (0);
}
