/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:07:22 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/05 11:23:49 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	swap(t_stack *stack)
{
	int	temp;

	if (stack->content_lenght < 2)
		return ;
	temp = stack->top;
	stack->content[stack->top] = stack->content[stack->top - 1];
	stack->content[stack->top - 1] = temp;
}
