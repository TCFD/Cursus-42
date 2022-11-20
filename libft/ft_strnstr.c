/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:48:16 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/19 22:48:09 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	mem;
	int	boolean;

	i = 0;
	boolean = 0;
	if (little[0] == '\0')
		return ((char *)(big));
	while (big[i] && i < (int)len)
	{
		if (big[i] == little[0])
		{
			mem = i;
			j = 0;
			while (big[i] == little[j] && i++ < (int)len)
				j++;
			if (i < (int)len && little[j] == '\0')
				boolean = 1;
		}
		if (boolean)
			return ((char *)(big + mem));
		i++;
	}
	return (NULL);
}
