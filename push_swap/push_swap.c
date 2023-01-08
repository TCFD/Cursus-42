/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:46:21 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/06 14:55:21 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	int	i = 9;

	stack_a = malloc(sizeof(t_stack));
	stack_a->content = malloc(sizeof(int) * 10);
	stack_a->content_lenght = 10;
	stack_a->top = 0;
	stack_a->bottom = 7;
	stack_a->number_of_elements = 8;
	while (i >= 0)
	{
		stack_a->content[i] = i;
		i--;
	}
	ft_printf("avant swap\n");
	print_stack(stack_a);
	rotate(stack_a);
	rotate(stack_a);
	rotate(stack_a);
	rotate(stack_a);
	ft_printf("\napres swap\n");
	print_stack(stack_a);
	(void)argc;
	(void)argv;
	free(stack_a->content);
	free(stack_a);
	return (0);
}
