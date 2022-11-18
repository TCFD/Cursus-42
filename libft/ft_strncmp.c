/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:02:29 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/15 14:19:20 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

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
