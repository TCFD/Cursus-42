/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:01:36 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/09 15:53:26 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int	content_lenght;
	int	*content;
}	t_stack;

void	swap(t_stack *stack);
void	rotate(t_stack *stack);
void	print_stack(t_stack *stack_a, t_stack *stack_b);
void	reverse_rotate(t_stack *stack);
void	push(t_stack *a_stack, t_stack *b_stack);
int		is_sorted(t_stack *stack);
void	aguillage(t_stack *stack);
void	content_lenght2(void);
void	content_lenght3(t_stack *stack);

#endif