/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:34:54 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/18 18:13:03 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*re;
	int		i;

	i = 0;
	if (!nmemb || !size)
		return (NULL);
	re = malloc(nmemb * size);
	if (!re)
		return (NULL);
	while (i < (int)(nmemb))
	{
		((char *)(re))[i] = '\0';
		i++;
	}
	return (re);
}
