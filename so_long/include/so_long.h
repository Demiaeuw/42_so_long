/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:41:04 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/27 19:03:53 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <fcntl.h>
# include <string.h>
# include <stdarg.h>

# include "../minilibx-linux/mlx.h"
# include <X11/X.h>
# include <X11/keysym.h>

# define KEY_ESC 65307
# define KEY_Z 122
# define KEY_Q 113
# define KEY_S 115
# define KEY_D 100
# define KEY_A 97
# define KEY_W 119
# define KEY_UP 65362
# define KEY_DOWN 65364
# define KEY_RIGHT 65363
# define KEY_LEFT 65361

# define WALL '1'
# define GROUND '0'
# define PLAYER 'P'
# define EXIT_CLOSED 'E'
# define EXIT_OPEN 'O'
# define COLLECT 'C'

typedef struct s_map
{
	int		height;
	int		width;
	int		collect;
	char	**tab;
	char	**dfs_tab;
}	t_map;

typedef struct s_sprites
{
	void	*player;
	void	*collectible;
	void	*exit_closed;
	void	*exit_open;
	void	*ground;
	void	*wall;
}	t_sprites;

typedef struct s_position
{
	int		x;
	int		y;
	int		x_end;
	int		y_end;
	int		x_exit;
	int		y_exit;
}	t_position;

typedef struct s_so_long
{
	t_map		*map;
	t_sprites	*sprite;
	t_position	*position;
	void		*mlx;
	void		*window;
	int			nb_pas;
}	t_so_long;

int		main(int ac, char **av);

/*			ERROR			*/
void	errorargc(void);
void	errorber(void);
void	errorfileexist(void);
void	errormapcall(void (*f)(), t_map *map);
void	errormapcontent(void);
void	errormapplayer(void);
void	errormapexit(void);
void	errormapempty(void);
void	errormaptaille(void);
void	errormaprectangle(void);
void	errormapwall(void);
void	errormapcollect(void);
void	errormlxcall(void (*f)(), t_so_long *game);
void	errormlxspriteplayer(void);
void	errormlxspriteexitclosed(void);
void	errormlxspriteexitopen(void);
void	errormlxspritewall(void);
void	errormlxspritecollect(void);
void	errormlxspritewall(void);
void	errormlxspriteground(void);
void	erroropen(void);
/*			FREE			*/
void	liberer_str(char *str);
void	liberer_str_tab(char **str);
void	free_map(t_map *map);
void	free_map2(t_map *map);
void	main_free(t_so_long **game);
void	main_free2(t_so_long **game);
/*			INIT			*/
void	main_init(t_so_long **game);
int		main_exit_nowin(t_so_long *game);
void	init_position(t_so_long **game);

/*			ARGUMENT		*/
int		main_argument(int ac, char **av);
int		main_argument_erreur(int ac, char **av);
int		check_ber(int ac, char **av);
int		check_file_exist(char *filename);
int		check_file_empty(char *filename);

/*			MAP			*/
void	main_map(int ac, char **av, t_map *map);
t_map	*init_map(void);
void	add_hight(char *filename, t_map *map);
void	add_with(char *filename, t_map *map);
void	add_malloc_tab(t_map *map);
void	add_map(char *filename, t_map *map);
void	main_map_check(t_map *map);
void	check_content(t_map *map);
void	check_rectangle(t_map *map);
void	check_wall(t_map *map);
void	check_playerandexit(t_map *map);
void	check_collectible(t_map *map);
void	exit_position(t_so_long **game);
void	player_position(t_so_long **game);
/*			MAP_DFS			*/
void	main_dfs(t_so_long **game);
void	dfs_add_malloc_tab(t_map *map);
void	dfs_add_map(char *filename, t_map *map);
int		dfs(int x, int y, int collect, char **tab);
int		dfs_player_position_x(t_so_long **game);
int		dfs_player_position_y(t_so_long **game);

/*			WINDOW			*/
void	main_window_init(t_so_long **game);
void	create_game_window(t_so_long **game);
void	init_sprites(t_so_long **game);
void	init_sprites2(t_so_long **game, int size);
void	sprite_in_window(t_so_long **game);
void	window_refresh(t_so_long **g, int i, int j);
void	printstartgame(void);
void	printnbpas(t_so_long **game);
void	close_echap(t_so_long *game);
void	printendgamevalid(t_so_long **game);
void	printendgameechec(void);

/*			GAMEPLAY		*/

int		input_to_move(int keycode, t_so_long *game);
int		check_move(t_so_long **game, int new_y, int new_x);
void	update_map(t_so_long **game, char cell);
void	move_player(t_so_long **game, char direction);
void	player_up(t_so_long **game);
void	player_down(t_so_long **game);
void	player_left(t_so_long **game);
void	player_right(t_so_long **game);
void	player_next_postion(t_so_long **game, char c);
void	player_reset_position(t_so_long **game);
void	refresh_window_after_mouve(t_so_long **game);
void	modif_exit(t_so_long **game);
void	taking_exit(t_so_long **game, int new_y, int new_x);

/*			UTILS			*/
// so_long
void	print_map(t_map *map);
void	print_dfs_map(t_map *map);
void	print_map_game(t_so_long **game);
void	print_dfs_map_game(t_so_long **game);
int		ft_strcmpend(char *str, char *src);
void	ft_putendl_fd(char *s, int fd);

// ft_printf
int		ft_printf(const char *str, ...);
int		ftp_intlen(long long nb);
int		ftp_put_pointer(void *n);
int		ftp_format(va_list args, const char format);
int		ftp_atoi(const char *str);
int		ftp_putnbrhex(unsigned long n);
int		ftp_putnbrhe_x(unsigned long n);
int		ftp_putchar(char c);
int		ftp_putstr(char *s);
int		ftp_putnbr(long long int n);
int		ftp_put_u_nbr(unsigned int n);
int		ftp_percent(void);

//			TEST			//

#endif
