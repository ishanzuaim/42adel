/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 16:04:00 by shulee            #+#    #+#             */
/*   Updated: 2023/12/04 16:04:03 by shulee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

typedef struct s_position
{
	int	x;
	int	y;
}	t_position;

typedef struct s_map_options
{
	char	empty_c;
	char	obstacle_c;
	char	full_c;
}	t_map_options;

char	*read_file(char *map_name, t_position *dimension, t_map_options *opt);
char	*parse_map(char *map, t_position *dimension, t_map_options opt);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_strcpy(char *dest, char *src);
int		ft_strcmp(char *s1, char*s2);
char	*ft_malloc_strcat(char *str, char *buffer, int length);
char	*reallocate(char *ptr, int size);
char	*map_error(void);
char	*check_map_opt_valid(char *map);
char	*set_options(char *buf, t_position *dimension, t_map_options *opt);

int		expand_square(t_position pos, int **obst, t_position dim, int level);
void	populate_obstacles(int **obst, t_position dimension, char *str);
void	print_first_largest(int **levels, t_position dimension, int **obst,
			t_map_options opt);
int		**initialize_2darray(t_position dimension);
int		has_obstacle(int **obst, t_position sqr_pos, int level);
void	traverse_grid(t_position dimension, int **levels, int **obst);

void	print_2darr(int **arr, t_position dimension);
char	*parse_stdin(t_position *dimension, t_map_options *map_opt);
