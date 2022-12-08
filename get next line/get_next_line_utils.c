/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:38:34 by rciaze            #+#    #+#             */
/*   Updated: 2022/12/08 12:45:59 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	unsigned int		j;
	char				*str;

	if (!s)
		return (NULL);
	if (len == 0 || (size_t) start > ft_strlen((char *) s))
		return (NULL);
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
	return (str);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;

	str = malloc(((ft_strlen(s1)) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	if (!s1)
		return ((char *)s2);
	while (s1[++i])
		str[i] = s1[0];
	while (s2[i - ft_strlen(s1)])
	{	
		str[i] = s2[-ft_strlen(s1) + i];
		i++;
	}
	str[i] = '\0';
	free(s1);
	free(s2);
	return (str);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
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


void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	c;

	c = '\0';
	i = 0;
	if (!s)
		return ;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
}
