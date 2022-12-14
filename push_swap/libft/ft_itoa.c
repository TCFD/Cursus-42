/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:41:32 by rciaze            #+#    #+#             */
/*   Updated: 2023/01/12 15:48:03 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	howmanydigits(long int n)
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

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	boolean = 0;
	i = howmanydigits(n) - 1;
	str = malloc(howmanydigits(n) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	str[howmanydigits(n)] = '\0';
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