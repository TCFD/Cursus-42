/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:02:29 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/22 17:52:05 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((unsigned char)(s1)[i] == (unsigned char)(s2)[i] && i < n)
		i++;
	if ((!(unsigned char)(s1)[i] && !(unsigned char)(s2)[i]) || i >= n)
		return (0);
	if ((unsigned char)(s1)[i] > (unsigned char)(s2)[i])
		return (1);
	return (-1);
}
