/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:41:32 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/17 14:32:19 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	how_many_digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		boolean;
	char	*str;
	int		i;

	boolean = 0;
	i = how_many_digits(n) - 1;
	str = malloc(how_many_digits(n) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	str[how_many_digits(n)] = '\0';
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		str[0] = '-';
		boolean = 1;
		n = -n;
	}
	while (i >= boolean)
	{
		str[i] = (char)(n % 10 + 48);
		n = n / 10;
		i--;
	}
	return (str);
}

/* int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
} */