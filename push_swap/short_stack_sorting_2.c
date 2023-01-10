/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_stack_sorting_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:10:22 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/10 16:25:49 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	content_lenght5_part2(t_stack *s_a, t_stack *s_b, int i, int boolean)
{
	while (++i < s_a->content_lenght && !boolean)
	{
		if (s_a->content[i] > s_b->content[0])
			boolean = 1;
	}
	if (--i < s_a->content_lenght / 2 && boolean)
	{
		while (i-- > 0)
		{
			ft_printf("ra\n");
			rotate(s_a);
		}
	}
	else if (boolean)
	{
		i = i / 2;
		while (i-- > 0)
		{
			ft_printf("rra\n");
			reverse_rotate(s_a);
		}
	}
	if (s_b->content_lenght)
		content_lenght5_part3(s_a, s_b);
}

void	content_lenght5_part3(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	j = 0;
	k = stack_a->content[0];
	push(stack_b, stack_a);
	ft_printf("pa\n");
	while (++i < stack_a->content_lenght)
	{
		if (stack_a->content[i] < k)
		{
			k = stack_a->content[i];
			j++;
		}
	}
	if (j < stack_a->content_lenght / 2)
	{
		while (!is_sorted(stack_a))
		{
			ft_printf("ra\n");
			rotate(stack_a);
		}
	}
	else if (!is_sorted(stack_a))
	{
		while (!is_sorted(stack_a))
		{
			ft_printf("ra\n");
			reverse_rotate(stack_a);
		}
	}
	if (stack_b->content_lenght)
		content_lenght5_part2(stack_a, stack_b, -1, 0);
}
