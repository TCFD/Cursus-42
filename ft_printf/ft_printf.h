/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:15:38 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/28 14:32:55 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
void	ft_putnbr(int n);
size_t	ft_strlen(const char *str);
int		how_many_digits(long int n);
char	*ft_strdup(const char *s);
int		ft_print_adress(void *p);

#endif	