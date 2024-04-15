/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:41:04 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/12 14:41:04 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONH_H
# define SO_LONG_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <fcntl.h>
# include <string.h>
# include <stdarg.h>

int		main(int ac, char **av);
/*			ERROR			*/
void	errorargc(void);
void	errorber(void);
void	errorfileexist(void);
void	errormapcontent(void);
void	errormapplayer(void);
void	errormapexit(void);
void	errormapempty(void);

/*			AGUMENT			*/
int		main_argument(int ac, char **av);
int		argument_erreur(int ac, char **av);
int		check_ber(int ac, char **av);
int		check_file_exist(char *filename);

/*			UTILS			*/
// so_long
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



#endif