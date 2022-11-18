/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:03:25 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/16 11:07:58 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	destsize;
	size_t	return_value;

	destsize = 0;
	while (dst[destsize] && destsize < size)
		destsize++;
	return_value = destsize + ft_strlen2((char *)(src));
	i = destsize;
	while (src[destsize - i] && destsize + 1 < size)
	{
		dst[destsize] = src[destsize - i];
		destsize++;
	}
	if (i < size)
		dst[destsize] = '\0';
	return (return_value);
}