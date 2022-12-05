/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:26:34 by rciaze            #+#    #+#             */
/*   Updated: 2022/12/05 16:44:35 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;

	if (!s1)
		return (s2);
	if (!s2)
		return (s1);
	str = malloc(((ft_strlen((char *)s1))
				+ ft_strlen((char *)s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	while (s2[i - ft_strlen((char *)s1)])
	{	
		str[i] = s2[-ft_strlen((char *)s1) + i];
		i++;
	}
	free((void *)s1);
	free((void *)s2);
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	unsigned int		j;
	char				*str;

	if (!s)
		return (NULL);
	if (len == 0 || (size_t) start > ft_strlen((char *) s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	while (i - start < (unsigned int)(len) && s[i])
		str[j++] = s[i++];
	str[j] = '\0';
	free((void *)s);
	return (str);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc((ft_strlen((char *)(s)) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i]; 
		i++;
	}
	str[i] = '\0';
	return (str);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
