/*
** EPITECH PROJECT, 2022
** B-PSU-100-BAR-1-1-myls-joan-pau.merida-ruiz
** File description:
** prototypes
*/

#ifndef LIB_H_
    #define LIB_H_

    #include "struct.h"
    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <SFML/Audio.h>
    #include <SFML/Graphics/Export.h>
    #include <SFML/Graphics/Color.h>
    #include <SFML/Graphics/Rect.h>
    #include <SFML/Graphics/Transform.h>
    #include <SFML/Graphics/Types.h>
    #include <SFML/System/Vector2.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <stddef.h>
    #include <unistd.h>
    #include <string.h>
    #include <fcntl.h>
    #include <time.h>
    #include <math.h>

    typedef enum {
        DEAD,
        FLYING,
        NOT_FLYING,
        INSIDE_TOWER
    } a_state;

    int help(int ac, char **av);
    int my_strlen(char *str);
    int my_bsn_count(char *str);
    char *my_strdup(char *src);
    char **my_str_to_word_array(char *str, char separator);
    char ***read_map(int ac, char **av, Info *st_amounts);
    void get_amounts(char ***arr, Info *st_amounts);
    float my_get_float(char *str);
    int error_handle(int ac, char **av);
    int my_put_nbr(int x);
    void my_putstr(char const *str);
    char *my_get_str(int value);
    void my_putchar(char c);
    int arr_error_handle(Info *st_amounts, char ***arr);
    void check_if_all_died(Plane *st_plane, Info *st_amounts, int p_index);
    sfCircleShape *create_circle(sfVector2f pos, float radius);
    void do_events(Win *st_win, Info *st_amounts);
    void do_frees(Win *st_win, Plane *st_plane,
        Tower *st_tower, Info *st_amounts);
    int draw_planes_landing(Win *st_win, Plane *st_plane,
        Info *st_amounts, int index);
    int draw_planes(Win *st_win, Plane *st_plane, Info *st_amounts, int index);
    int draw_towers(Win *st_win, Tower *st_tower, Info *st_amounts);
    void get_info(char ***arr, Tower *st_tower, Plane *st_plane);
    void get_move(Plane *st_plane, int index);
    float get_plane_distance(Plane *st_plane, int p2_index, int p_index);
    float get_tower_distance(Plane *st_plane, Tower *st_tower,
        int t_index, int p_index);
    void handle_collisions(Plane *st_plane, Tower *st_tower, Info *st_amounts);
    void handle_towers(Plane *st_plane, Tower *st_tower,
        Info *st_amounts, int p_index);
    void call_structs(Win *st_win, Plane *st_plane,
        Tower *st_tower, Info *st_amounts);
    void plane_take_off(Plane *st_plane, Info *st_amounts, int p_index);
    int screen_loop(Win *st_win, Plane *st_plane,
        Tower *st_tower, Info *st_amounts);
    void update_clock(Info *st_amounts);
    bool check_inside_tower(float tower_distance,
        Tower *st_tower, int t_index);
    void handle_planes(Plane *st_plane, int p_index);
    int sound_struct(s_sound *st_sound);
    int destroy_sound(s_sound *st_sound);
    bool close_wind(Win *st_win);
    bool if_has_to_take_off(Plane *st_plane, Info *st_amounts, int index);
    bool if_out_screen(Plane *st_plane, int index);
    bool if_plane_arrived(float arrival_distance);
    bool if_plane_flying(Plane *st_plane, int index);
    bool if_same_plane(int p_index, int p2_index);
    bool is_plane_dead(Plane *st_plane, int p_index);
    bool is_plane_inside_tower(Plane *st_plane, int p_index);
    bool is_plane_not_flying(Plane *st_plane, int p_index);
    bool l_activated(Info *st_amounts);
    bool s_activated(Info *st_amounts);
    bool n_activated(Info *st_amounts);
    bool l_pressed(Win *st_win);
    bool s_pressed(Win *st_win);
    bool n_pressed(Win *st_win);
    bool planes_crashing(float plane_distance);
    bool status_inside_tower(Plane *st_plane, int p_index);

#endif
