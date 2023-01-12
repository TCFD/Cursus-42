/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_stack_sorting_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:10:22 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/12 18:08:46 by rciaze           ###   ########.fr       */
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
	if (--i <= s_a->content_lenght / 2 && boolean)
	{
		while (s_a->content[0] < s_b->content[0]
			&& s_a->content[s_a->content_lenght - 1] > s_b->content[0])
			rotate(s_a, 'a');
	}
	else if (boolean)
	{
		while (s_a->content[0] < s_b->content[0]
			&& s_a->content[s_a->content_lenght - 1] > s_b->content[0])
			reverse_rotate(s_a, 'a');
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
	push(stack_b, stack_a, 'a');
	while (++i < stack_a->content_lenght)
	{
		if (stack_a->content[i] < k && ++j)
			k = stack_a->content[i];
	}
	if (j < stack_a->content_lenght / 2)
	{
		while (!is_sorted(stack_a))
			rotate(stack_a, 'a');
	}
	else if (!is_sorted(stack_a))
	{
		while (!is_sorted(stack_a))
			reverse_rotate(stack_a, 'a');
	}
	if (stack_b->content_lenght)
		content_lenght5_part2(stack_a, stack_b, -1, 0);
}
