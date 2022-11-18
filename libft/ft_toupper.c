/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:31:22 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/08 10:39:44 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/* int	main(int argc, char const *argv[])
{
	printf("%c = %c ?\n", toupper('c'), ft_toupper('c'));
	printf("%c = %c ?\n", toupper('a'), ft_toupper('a'));
	printf("%c = %c ?\n", toupper('0'), ft_toupper('0'));
	printf("%c = %c ?\n", toupper(' '), ft_toupper(' '));
	printf("%c = %c ?\n", toupper(';'), ft_toupper(';'));
	return (0);
} */
