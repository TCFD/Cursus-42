/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_function2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:51:17 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/09 14:57:16 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int	is_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (++i < stack->content_lenght)
	{
		if (stack->content[i - 1] > stack->content[i])
			return (0);
	}
	return (1);
}
