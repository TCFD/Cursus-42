/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:07:22 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/06 14:51:28 by zbp15            ###   ########.fr       */
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
	stack->content[stack->top] = stack->content[stack->top + 1];
	stack->content[stack->top + 1] = temp;
}

void	rotate(t_stack *stack)
{
	if (stack->top < stack->content_lenght - 1)
	{
		stack->top += 1;
		stack->bottom += 1;
	}
	else
	{
		stack->bottom = stack->top;
		stack->top = 0;
	}
}

void	reverse_rotate(t_stack *stack)
{
	if (stack->top > 0)
	{
		stack->top -= 1;
		stack->bottom -= 1;
	}
	else
	{
		stack->bottom = stack->top;
		stack->top = stack->content_lenght - 1;
	}
}

/*void	push(t_stack *stack)
{
	if (stack->top < stack->content_lenght - 1)
		stack->top += 1;
	else if ()
}*/

void	print_stack(t_stack *stack)
{
	int	compteur;
	int	i;

	i = stack->top;
	compteur = 0;
	while (stack->number_of_elements > compteur)
	{
		if (i < stack->content_lenght)
		{
			ft_printf("%i\n", stack->content[i]);
			i++;
			compteur++;
		}
		else
			i = 0;
	}
}
