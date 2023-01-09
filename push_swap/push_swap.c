/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:46:21 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/09 16:04:19 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	//int	i = 9;

	stack_a = malloc(sizeof(t_stack));
	stack_a->content = malloc(sizeof(int) * 10);
	stack_a->content_lenght = 3;
	/*while (i >= 0)
	{
		stack_a->content[i] = i;
		i--;
	}
	i = 9;*/
	stack_a->content[0] = 3;
	stack_a->content[1] = 1;
	stack_a->content[2] = 2;
	stack_b = malloc(sizeof(t_stack));
	stack_b->content = malloc(sizeof(int) * 10);
	stack_b->content_lenght = 0;
	aguillage(stack_a);
	/*while (i >= 0)
	{
		stack_b->content[i] = i + 500;
		i--;
	}*/
	//ft_printf("avant modifs\n");
	//print_stack(stack_a, stack_b);
	//swap(stack_a);
	//rotate(stack_a);
	//ft_printf("\napres modifs\n");
	//print_stack(stack_a, stack_b);
	//if (is_sorted(stack_a))
	//	ft_printf("\nA est trié, la dingz\n");
	//else
	//	ft_printf("\nA n'est pas trié, ouin ouin ouin\n");
	(void)argc;
	(void)argv;
	free(stack_a->content);
	free(stack_a);
	free(stack_b->content);
	free(stack_b);
	return (0);
}
