/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:35:18 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/18 18:14:48 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*firstpart(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		boolean;
	char	*str;

	i = 0;
	str = ft_strdup(s1);
	while (s1[i])
	{
		boolean = 0;
		j = -1;
		while (set[++j] && !boolean)
		{
			if (set[j] == s1[i])
				boolean = 1;
		}
		if (!boolean)
		{
			str = ft_strdup(s1 + i);
			break ;
		}
		else
			i++;
	}
	return (str);
}

char	*secondpart(char const *set, char *str)
{
	int		i;
	int		j;
	int		boolean;

	i = ft_strlen(str) - 1;
	while (str[i])
	{
		boolean = 0;
		j = -1;
		while (set[++j] && !boolean)
		{
			if (set[j] == str[i])
				boolean = 1;
		}
		if (!boolean)
		{
			str[i + 1] = '\0';
			break ;
		}
		else
			i--;
	}
	return (ft_strdup(str));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	str = firstpart(s1, set);
	return (secondpart(set, str));
}

/* int	main(void)
{
	printf("%s\n", ft_strtrim("chaine de test", "chat"));
} */