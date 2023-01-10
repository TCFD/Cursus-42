/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_stack_sorting_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:10:22 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/10 12:43:47 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	content_lenght5_part2(t_stack *stack_a, t_stack *stack_b, int i, int j)
{
	int	k;

	ft_printf("pa\n");
	push(stack_b, stack_a);
	k = stack_a->content[0];
	while (i++ < stack_a->content_lenght)
	{
		if (stack_a->content[i] < k)
			j++;
	}
	final_sort(stack_a, j);
	ft_printf("pb\n");
	push(stack_b, stack_a);
}

void	final_sort(t_stack *stack_a, int j)
{
	if (j < stack_a->content_lenght / 2)
	{
		while (!is_sorted(stack_a))
		{
			ft_printf("ra\n");
			rotate(stack_a);
		}
	}
	else
	{
		while (!is_sorted(stack_a))
		{
			ft_printf("rra\n");
			reverse_rotate(stack_a);
		}
	}
}
