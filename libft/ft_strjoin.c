/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:22:59 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/18 18:14:00 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

size_t	slen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	str = malloc(((slen((char *)s1)) + slen((char *)s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	while (s2[i - slen((char *)s1)])
	{	
		str[i] = s2[-slen((char *)s1) + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/* 
int	main(void)
{
	char	s[]="premiere chaine", s2[]="deuxieme chaine";

	printf("%s", ft_strjoin(s, s2));
} */