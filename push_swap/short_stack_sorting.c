/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_stack_sorting.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:44:44 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/10 12:46:59 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	aguillage(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->content_lenght == 1 || is_sorted(stack_a))
		return ;
	else if (stack_a->content_lenght == 2)
		content_lenght2(stack_a);
	else if (stack_a->content_lenght == 3)
		content_lenght3(stack_a);
	else if (stack_a->content_lenght <= 5)
		content_lenght5(stack_a, stack_b, 0);
}

void	content_lenght2(t_stack *stack)
{
	ft_printf("sw\n");
	swap(stack);
}

void	content_lenght3(t_stack *stack)
{
	if (stack->content[0] > stack->content[1]
		&& stack->content[1] > stack->content[2])
	{
		ft_printf("ra\nsa\n");
		rotate(stack);
		swap(stack);
	}
	else if (stack->content[0] > stack->content[1]
		&& stack->content[1] < stack->content[2]
		&& stack->content[0] < stack->content[2])
	{	
		ft_printf("sa\n");
		swap(stack);
	}
	else if (stack->content[0] > stack->content[1]
		&& stack->content[1] < stack->content[2]
		&& stack->content[0] > stack->content[2])
	{
		ft_printf("ra\n");
		rotate(stack);
	}
	else
		content_lenght3_part2(stack);
}

void	content_lenght3_part2(t_stack *stack)
{
	if (stack->content[0] < stack->content[1]
		&& stack->content[1] > stack->content[2]
		&& stack->content[0] > stack->content[2])
	{
		ft_printf("rra\n");
		reverse_rotate(stack);
	}
	else
	{
		ft_printf("sa\nra\n");
		swap(stack);
		rotate(stack);
	}
}

void	content_lenght5(t_stack *stack_a, t_stack *stack_b, int i)
{
	ft_printf("pb\npb\n");
	push(stack_a, stack_b);
	push(stack_a, stack_b);
	aguillage(stack_a, stack_b);
	if (is_sorted(stack_b))
		content_lenght2(stack_b);
	while (stack_b->content[0] > stack_a->content[i]
		&& i < stack_a->content_lenght - 1)
		i++;
	if (i < stack_a->content_lenght / 2)
	{
		while (i-- >= 0)
		{
			ft_printf("ra\n");
			rotate(stack_a);
		}
	}
	else
	{
		while (i-- >= 0)
		{
			ft_printf("rra\n");
			reverse_rotate(stack_a);
		}
	}
	content_lenght5_part2(stack_a, stack_b, 0, 0);
}
