/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_stack_sorting.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:44:44 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/09 16:04:08 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	aguillage(t_stack *stack)
{
	if (stack->content_lenght == 1 || is_sorted(stack))
		return ;
	else if (stack->content_lenght == 2)
		content_lenght2();
	else if (stack->content_lenght == 3)
		content_lenght3(stack);
}

void	content_lenght2(void)
{
	ft_printf("sw\n");
}

void	content_lenght3(t_stack *stack)
{
	if (stack->content[0] > stack->content[1]
		&& stack->content[1] > stack->content[2])
		ft_printf("ra\nsa\n");
	else if (stack->content[0] > stack->content[1]
		&& stack->content[1] < stack->content[2]
		&& stack->content[0] < stack->content[2])
		ft_printf("sa\n");
	else if (stack->content[0] > stack->content[1]
		&& stack->content[1] < stack->content[2]
		&& stack->content[0] > stack->content[2])
		ft_printf("ra\n");
}