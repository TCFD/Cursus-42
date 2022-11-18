/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:48:16 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/15 14:41:17 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

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
