/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izuaim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:31:51 by izuaim            #+#    #+#             */
/*   Updated: 2023/12/03 18:59:14 by dwoidt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	print_single(char c);
int		ft_atoi(const char *str);
char	*ft_realloc(char *ptr, int len, char c, int *cap);
void	print_double(char *val, char **numbers);
void	print_triple(char *val, char **numbers);
void	print_number(char *val, int is_first, int level, char **numbers);
void	convert_to_num(char *val, char **numbers);
int		char_to_num(char c);
void	ft_strlcpy(char *dest, char *src, unsigned int n);
char	**file_reader(char *filepath);
int		is_number(char c);
int		is_printable(char c);
int		is_space(char c);
int		validate_input(int argc, char *argv[]);
char	*ft_strcpy(char *dest, char *src);
char	trim_spaces(int file);
int		check2digit(char *str);

#endif
