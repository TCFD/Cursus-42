/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:50:33 by zbp15             #+#    #+#             */
/*   Updated: 2022/11/30 10:50:42 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
void	ft_putnbr(int n);
size_t	ft_strlen(const char *str);
int		how_many_digits(long int n);
char	*ft_strdup(const char *s);
int		ft_print_adress(void *p, char *base, int i);
int		how_many_digits2(unsigned long int n);
void	ft_putnbr2(unsigned int n);
int		ft_print_hexa(unsigned int n, char *base);
int		how_many_digits3(unsigned int n);

#endif	