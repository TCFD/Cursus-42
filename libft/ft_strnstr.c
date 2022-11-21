/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:48:16 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/21 10:14:16 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	int		mem;

	i = 0;
	if (little[0] == '\0')
		return ((char *)(big));
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			mem = i;
			i--;
			while (big[++i] == little[j] && i < len)
				j++;
			if (little[j] == '\0')
				return ((char *)(big + mem));
			else
				i = mem + 1;
		}
		else
			i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";

	printf("%s\n", ft_strnstr(haystack, "a", -1));
	printf("%s\n\n", strnstr(haystack, "a", -1));
	printf("%s\n", ft_strnstr(haystack, needle, -1));
	printf("%s\n\n", strnstr(haystack, needle, -1));
	printf("%s\n", ft_strnstr(haystack, "aaabc", 5));
	printf("%s\n\n", strnstr(haystack, "aaabc", 5));
	printf("%s\n", ft_strnstr("aaaab", "aaab", 5));
	printf("%s\n", strnstr("aaaab", "aaab", 5));
} */