/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:42:01 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/08 16:46:24 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	c;

	c = '\0';
	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
}

/* int	main(void)
{
	char t[] = "test test";
	printf("%s%c", t, '\n');
	ft_bzero(t, 3);
	printf( t);
	return 0;
} */
