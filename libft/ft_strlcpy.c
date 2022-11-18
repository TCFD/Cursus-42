/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 08:56:17 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/16 10:18:59 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlen2(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	if ((int)(size) < 0)
		size = 1111111111;
	while (src[i] && i < (int)(size) - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (size != 0)
		dst[i] = '\0';
	return (ft_strlen2((char *)(src)));
}

/* int	main(void)
{
	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);
	char src2[] = "coucou";
	char dest2[10]; memset(dest, 'A', 10);
	
	printf("%zu, %zu\n", ft_strlcpy(dest, src, -2), strlcpy(dest2, src2, -2));
	printf("ft_strlcpy : %s\nstrlcpy : %s", dest, dest2);
} */