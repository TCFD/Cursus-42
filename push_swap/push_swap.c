/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:46:21 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/08 17:15:04 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int	i = 9;

	stack_a = malloc(sizeof(t_stack));
	stack_a->content = malloc(sizeof(int) * 10);
	stack_a->content_lenght = 10;
	while (i >= 0)
	{
		stack_a->content[i] = i;
		i--;
	}
	i = 9;
	stack_b = malloc(sizeof(t_stack));
	stack_b->content = malloc(sizeof(int) * 10);
	stack_b->content_lenght = 10;
	while (i >= 0)
	{
		stack_b->content[i] = i + 500;
		i--;
	}
	ft_printf("avant modifs\n");
	print_stack(stack_a);
	ft_printf("\n");
	print_stack(stack_b);

	ft_printf("\napres modifs\n");
	print_stack(stack_a);
	ft_printf("\n");
	print_stack(stack_b);
	(void)argc;
	(void)argv;
	free(stack_a->content);
	free(stack_a);
	free(stack_b->content);
	free(stack_b);
	return (0);
}
