/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 11:07:22 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/08 16:51:32 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	swap(t_stack *stack)
{
	int	temp;

	if (stack->content_lenght < 2)
		return ;
	temp = stack->content[0];
	stack->content[0] = stack->content[1];
	stack->content[1] = temp;
}

void	rotate(t_stack *stack)
{
	int	temp;
	int	temp2;
	int	i;


	if (stack->content_lenght < 2)
		return ;
	i = 0;
	temp2 = stack->content[i];
	while (i < stack->content_lenght - 1)
	{
		temp = stack->content[i];
		stack->content[i] = stack->content[i + 1];
		stack->content[i + 1] = temp;
		i++;
	}
	stack->content[stack->content_lenght - 1] = temp2;
}

void	reverse_rotate(t_stack *stack)
{
	int	temp;
	int	temp2;
	int	i;


	if (stack->content_lenght < 2)
		return ;
	i = stack->content_lenght - 1;
	temp2 = stack->content[stack->content_lenght - 1];
	while (0 < i)
	{
		temp = stack->content[i];
		stack->content[i] = stack->content[i - 1];
		stack->content[i - 1] = temp;
		i--;
	}
	stack->content[i] = temp2;
}

void	push(t_stack *a_stack, t_stack *b_stack)
{
	int	*content_a;
	int	*content_b;
	int	i;
	int	temp;

	content_a = malloc(sizeof(int) * a_stack->content_lenght - 1);
	content_b = malloc(sizeof(int) * b_stack->content_lenght + 1);
	i = 0;
	temp = a_stack->content[0];
	while (++i < a_stack->content_lenght)
		content_a[i - 1] = a_stack->content[i];
	a_stack->content_lenght -= 1;
	i = -1;
	while (++i < b_stack->content_lenght)
		content_b[i + 1] = b_stack->content[i];
	content_b[0] = temp;
	b_stack->content_lenght += 1;
	free(a_stack->content);
	free(b_stack->content);
	a_stack->content = content_a;
	b_stack->content = content_b;
}

void	print_stack(t_stack *stack)
{
	int	compteur;

	compteur = 0;
	while (compteur < stack->content_lenght)
	{
		ft_printf("%i\n", stack->content[compteur]);
		compteur++;
	}
}
