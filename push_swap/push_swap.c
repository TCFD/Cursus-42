/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:46:21 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/12 18:08:10 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = malloc(sizeof(t_stack));
	stack_a->content_lenght = argc - 1;
	stack_a->content = malloc(sizeof(int) * stack_a->content_lenght);
	get_stack(stack_a, argc, argv);
	stack_b = malloc(sizeof(t_stack));
	stack_b->content = malloc(sizeof(int) * 0);
	stack_b->content_lenght = 0;
	//ft_printf("\nAvant modifs\n");
	//print_stack(stack_a, stack_b);
	//ft_printf("\nApres modifs\n\n");
	aguillage(stack_a, stack_b);
	//print_stack(stack_a, stack_b);
	//if (is_sorted(stack_a) && !stack_b->content_lenght)
	//	ft_printf("\nA est trié, la dingz\n");
	//else if (stack_b->content_lenght && is_sorted(stack_a))
	//	ft_printf("\nA est trié, mais B est pas vide t nul frr\n");
	//else if (stack_b->content_lenght)
	//	ft_printf("\nA est pas trié et en plus B est pas vide t vrm nul\n");
	//else
	//	ft_printf("\nA n'est pas trié, ouin ouin ouin, "
	//		"c le bruit que tu fais pck t nul\n");
	free(stack_a->content);
	free(stack_a);
	free(stack_b->content);
	free(stack_b);
	return (0);
}
