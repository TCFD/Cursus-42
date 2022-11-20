/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:06:09 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/19 22:24:09 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	unsigned int		j;
	char				*str;

	if (len == 0 || (size_t) start > ft_strlen((char *) s))
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