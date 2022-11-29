/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:34:50 by zbp15             #+#    #+#             */
/*   Updated: 2022/11/29 17:49:10 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	how_many_digits3(unsigned int n)
{
	int				count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		count++;
		n /= 16;
	}
	return (count);
}

int	ft_print_hexa(unsigned int n, char *base)
{
	char	*str;
	int		i;
	int		c;

	c = how_many_digits3(n);
	str = malloc ((c + 1) * sizeof(char));
	if (!str)
		return (0);
	i = c;
	while (i-- > 0)
	{
		str[i] = base[n % 16];
		n /= 16;
	}
	str[c] = '\0';
	ft_putstr(str);
	free(str);
	return (c);
}
