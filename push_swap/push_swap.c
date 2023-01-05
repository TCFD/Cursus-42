/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:46:21 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/05 11:49:58 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	int	i = 0;

	stack_a = malloc(sizeof(t_stack));
	stack_a->content = malloc(sizeof(int) * 10);
	stack_a->content_lenght = 10;
	stack_a->top = 9;
	stack_a->bottom = 0;
	while (i < 10)
	{
		stack_a->content[i] = i;
		i++;
	}
	ft_printf("avant swap\n");
	i = 0;
	while (i < 10)
	{
		ft_printf("%d, ", stack_a->content[i]);
		i++;
	}
	swap(stack_a);
	ft_printf("\napres swap\n");
	i = 0;
	while (i < 10)
	{
		ft_printf("%d, ", stack_a->content[i]);
		i++;
	}
	(void)argc;
	(void)argv;
	return (0);
}
