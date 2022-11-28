/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 09:00:21 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/28 17:00:45 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	what_size_malloc(void *p)
{
	int	count;
	long long int	n;

	n = (long long int)p;
	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n)
	{
		count++;
		n /= 16;
	}
	return (count);
}

/* int		ft_print_adress(void *p)
{
	
}
 */
int	main(void)
{
	void	*p;
	int		i;

	i = 0;
	p = &i;
	printf("%p\n\n", p);
	printf("%d", what_size_malloc(p));
	return (0);
}
