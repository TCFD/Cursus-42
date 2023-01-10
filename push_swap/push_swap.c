/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 10:46:21 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/10 12:47:12 by zbp15            ###   ########.fr       */
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
	stack_a->content = malloc(sizeof(int) * 5);
	stack_a->content_lenght = 4;
	/*while (i >= 0)
	{
		stack_a->content[i] = i;
		i--;
	}
	i = 9;*/
	stack_a->content[0] = 561;
	stack_a->content[1] = 3986512;
	stack_a->content[2] = -1;
	stack_a->content[3] = 55;
//	stack_a->content[4] = 4;
	stack_b = malloc(sizeof(t_stack));
	stack_b->content = malloc(sizeof(int) * 0);
	stack_b->content_lenght = 0;
	/*while (i >= 0)
	{
		stack_b->content[i] = i + 500;
		i--;
	}*/
	ft_printf("\nAvant modifs\n");
	print_stack(stack_a, stack_b);
	ft_printf("\nApres modifs\n\n");
	aguillage(stack_a, stack_b);
	print_stack(stack_a, stack_b);
	if (is_sorted(stack_a) && !stack_b->content_lenght)
		ft_printf("\nA est trié, la dingz\n");
	else if (stack_b->content_lenght && is_sorted(stack_a))
		ft_printf("\nA est trié, mais B est pas vide t nul frr\n");
	else if (stack_b->content_lenght)
		ft_printf("\nA est pas trié et en plus B est pas vide t vrm nul\n");
	else
		ft_printf("\nA n'est pas trié, ouin ouin ouin, "
			"c le bruit que tu fais pck t nul\n");
	(void)argc;
	(void)argv;
	free(stack_a->content);
	free(stack_a);
	free(stack_b->content);
	free(stack_b);
	return (0);
}
