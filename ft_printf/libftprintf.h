/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:50:33 by zbp15             #+#    #+#             */
/*   Updated: 2022/11/30 10:48:18 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

static int		ft_printf(const char *str, ...);
static int		ft_putchar(char c);
static int		ft_putstr(char *s);
static void		ft_putnbr(int n);
static size_t	ft_strlen(const char *str);
static int		how_many_digits(long int n);
static char		*ft_strdup(const char *s);
static int		ft_print_adress(void *p, char *base, int i);
static int		how_many_digits2(unsigned long int n);
static void		ft_putnbr2(unsigned int n);
static int		ft_print_hexa(unsigned int n, char *base);
static int		how_many_digits3(unsigned int n);

#endif	