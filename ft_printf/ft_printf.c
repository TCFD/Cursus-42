/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:15:26 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/25 19:42:01 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
#include <stdio.h>

int	what_to_print(va_list list, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(list, int)));
	if (c == 'd')
		return (how_many_digits(va_arg(list, int)));
	if (c == 's')
		return (ft_putstr(va_arg(list, char *)));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += what_to_print(list, str[i]);
		}
		else
		{
			ft_putchar(str[i]);
			len++;
		}
		i++;
	}
	va_end(list);
	return (len);
}	

int	main(void)
{
	printf("\nReturn :%d", ft_printf("%c\n%d\nAlors ? et bah %s", 's', 123, "Ouais dinguerie"));
	printf("\nReturn :%d", printf("%c\n%d\nAlors ? et bah %s", 's', 123, "Ouais dinguerie"));

}
