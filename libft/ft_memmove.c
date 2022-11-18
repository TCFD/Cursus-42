/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:14:40 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/18 18:13:30 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy2(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)(dest))[i] = ((char *)(src))[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n - 1;
	if (dest < src)
		ft_memcpy2(dest, src, n);
	else
	{
		while ((int) i > -1)
		{
			((char *)(dest))[i] = ((char *)(src))[i];
			i--;
		}
	}
	return (dest);
}

/* int main()
{
	char d1[] = "Bonjour comment ca va ?", d2[] = "Bonjour comment ca va ?",
	 d3[] = "Bonjour comment ca va ?";	

	ft_memmove(&d1[10], &d1, 13);
	memmove(&d2[10], &d2, 13);
	memcpy(&d3[10], &d3, 13);
	for ( int i = 0 ; i < 22 ; ++i )
	    printf( "%c", d1[i] );
	printf("\n");
	printf("\n");
	for ( int i = 0 ; i < 22 ; ++i )
	    printf( "%c", d2[i] );
	printf("\n");
	for ( int i = 0 ; i < 22 ; ++i )
	    printf( "%c", d3[i] );
	
	return 0;
} */