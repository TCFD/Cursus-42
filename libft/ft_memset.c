/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:24:46 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/10 09:11:51 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = c;
		i++;
	}
	return (s);
}

/* int	main(void)
{
	char s[] = "sdfsdf", t[] = "sdfsdf";

	memset(s, '0', 5);
	ft_memset(t, '0', 5);
	printf("%s\n%s", s, t);
} */