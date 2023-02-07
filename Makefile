##
## EPITECH PROJECT, 2022
## B-MUL-100-BAR-1-1-myhunter-joan-pau.merida-ruiz
## File description:
## Makefile
##

SRC	=	src/SkyScan.c \
		lib/help.c \
		lib/my_bsn_count.c \
		lib/my_get_float.c \
		lib/my_get_str.c \
		lib/my_put_nbr.c \
		lib/my_putstr.c \
		lib/my_putchar.c \
		lib/my_strdup.c \
		lib/my_strlen.c \
		lib/my_str_to_word_arr.c \
		src/parsing/read_map.c \
		src/parsing/get_amounts.c \
		src/parsing/get_info.c \
		src/error_handling/error_handle.c \
		src/error_handling/arr_error_handle.c \
		src/handling/handle_collisions.c \
		src/handling/handle_towers.c \
		src/handling/handle_planes.c \
		src/structs/update_clock.c \
		src/structs/structs.c \
		src/structs/sound.c \
		src/plane/check_if_all_died.c \
		src/plane/get_move.c \
		src/plane/get_plane_distance.c \
		src/plane/plane_take_off.c \
		src/tower/create_circle.c \
		src/tower/get_tower_distance.c \
		src/drawing/draw_planes_landing.c \
		src/drawing/draw_planes.c \
		src/drawing/draw_towers.c \
		src/events/do_events.c \
		src/events/do_frees.c \
		src/events/screen_loop.c \
		src/bool_functions/check_inside_tower.c \
		src/bool_functions/close_wind.c \
		src/bool_functions/if_has_to_take_off.c \
		src/bool_functions/if_out_screen.c \
		src/bool_functions/if_plane_arrived.c \
		src/bool_functions/if_plane_flying.c \
		src/bool_functions/if_same_plane.c \
		src/bool_functions/is_plane_dead.c \
		src/bool_functions/is_plane_inside_tower.c \
		src/bool_functions/is_plane_not_flying.c \
		src/bool_functions/letter_activated.c \
		src/bool_functions/letter_pressed.c \
		src/bool_functions/plane_crashing.c \
		src/bool_functions/status_inside_tower.c \


OBJ	=	$(SRC:.c=.o)

NAME =	SkyScan

CSFML_FLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

CFLAGS += -I ./include/ -g3

MATHFLAGS += -lm -ldl

all: $(NAME)

$(NAME): 		$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CSFML_LIB) $(CSFML_FLAGS) $(MATHFLAGS)
	$(RM) src/*.o
	$(RM) lib/*.o
	$(RM) src/bool_functions/*.o
	$(RM) src/parsing/*.o
	$(RM) src/error_handling/*.o
	$(RM) src/handling/*.o
	$(RM) src/structs/*.o
	$(RM) src/plane/*.o
	$(RM) src/tower/*.o
	$(RM) src/drawing/*.o
	$(RM) src/events/*.o

clean:
	$(RM) -f $(OBJ)
	$(RM) src/*.o

fclean:		clean
	$(RM) $(NAME)
	rm -f coding-style-reports.log

re: 	fclean all

test:
	make -C tests/
