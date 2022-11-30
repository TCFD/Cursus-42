/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:51:08 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/30 10:45:30 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/* int main(void)
{
	ft_putchar_fd('r', 1);
	return 0;
} */
