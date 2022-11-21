/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:34:54 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/21 17:53:38 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*re;

	if (__SIZE_MAX__ / nmemb > size)
	{
		re = malloc(nmemb * size);
		if (!re)
			return (NULL);
	}
	else
		return (NULL);
	ft_bzero(re, nmemb * size);
	return (re);
}
