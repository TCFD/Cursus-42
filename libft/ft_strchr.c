/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:45:13 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/19 22:25:04 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	if (c == '\0')
		return ((char *)(str) + ft_strlen((char *)(str)));
	while (str[i])
	{
		if (str[i] == (unsigned char)(c))
		{
			return ((char *)(str) + i);
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char s[] = "tripouille";

	printf("%s\n", ft_strchr(s, 'o' + 256));
	printf("%s\n", strchr(s, 'o' + 256));
} */