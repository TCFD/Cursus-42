/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:35:18 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/22 17:51:21 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*start_search(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		boolean;
	char	*str;

	i = -1;
	str = ft_strdup(s1);
	while (s1[++i])
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
		else if (!s1[i + 1])
			str = ft_strdup("");
	}
	return (str);
}

char	*end_search(char const *set, char *str)
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

	str = start_search(s1, set);
	return (end_search(set, str));
}

/* int	main(void)
{
	printf("%s\n", ft_strtrim("   xxx   xxx", "x "));
} */