/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_stack_sorting.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:44:44 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/12 17:33:11 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	aguillage(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->content_lenght == 1 || is_sorted(stack_a))
		return ;
	else if (stack_a->content_lenght == 2)
		content_lenght2(stack_a, 'a');
	else if (stack_a->content_lenght == 3)
		content_lenght3(stack_a);
	else if (stack_a->content_lenght <= 5)
		content_lenght5(stack_a, stack_b, 0);
}

void	content_lenght2(t_stack *stack, char c)
{
	swap(stack, c);
}

void	content_lenght3(t_stack *stack)
{
	if (stack->content[0] > stack->content[1]
		&& stack->content[1] > stack->content[2])
	{
		rotate(stack, 'a');
		swap(stack, 'a');
	}
	else if (stack->content[0] > stack->content[1]
		&& stack->content[1] < stack->content[2]
		&& stack->content[0] < stack->content[2])
		swap(stack, 'a');
	else if (stack->content[0] > stack->content[1]
		&& stack->content[1] < stack->content[2]
		&& stack->content[0] > stack->content[2])
		rotate(stack, 'a');
	else
		content_lenght3_part2(stack);
}

void	content_lenght3_part2(t_stack *stack)
{
	if (stack->content[0] < stack->content[1]
		&& stack->content[1] > stack->content[2]
		&& stack->content[0] > stack->content[2])
		reverse_rotate(stack, 'a');
	else
	{
		swap(stack, 'a');
		rotate(stack, 'a');
	}
}

void	content_lenght5(t_stack *s_a, t_stack *s_b, int i)
{
	push(s_a, s_b, 'b');
	push(s_a, s_b, 'b');
	aguillage(s_a, s_b);
	if (is_sorted(s_b))
		content_lenght2(s_b, 'b');
	while (s_b->content[0] > s_a->content[i] && i < s_a->content_lenght - 1)
		i++;
	if (i < s_a->content_lenght / 2 && !is_sorted(s_a))
	{
		while (i-- >= 0)
			rotate(s_a, 'a');
	}
	else if (!is_sorted(s_a))
	{
		while (i-- >= 0)
			reverse_rotate(s_a, 'a');
	}
	content_lenght5_part2(s_a, s_b, -1, 0);
}
