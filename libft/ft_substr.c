/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:06:09 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/16 15:26:20 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen2(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	unsigned int		j;
	char				*str;

	if (len == 0 || (size_t) start > ft_strlen2((char *) s))
		return ("");
	str = malloc(len + 1 * sizeof(char));
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	while (i - start < (unsigned int)(len))
		str[j++] = s[i++];
	if (len != 0)
		str[j] = '\0';
	return (str);
}

/* int	main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";

	printf("%s", ft_substr(str, 0, 10));
} */