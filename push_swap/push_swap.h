/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:01:36 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/12 17:32:18 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int	content_lenght;
	int	*content;
}	t_stack;

void	swap(t_stack *stack, char c);
void	rotate(t_stack *stack, char c);
void	print_stack(t_stack *stack_a, t_stack *stack_b);
void	reverse_rotate(t_stack *stack, char c);
void	push(t_stack *a_stack, t_stack *b_stack, char c);
int		is_sorted(t_stack *stack);
void	aguillage(t_stack *stack_a, t_stack *stack_b);
void	content_lenght2(t_stack *stack, char c);
void	content_lenght3(t_stack *stack);
void	content_lenght3_part2(t_stack *stack);
void	content_lenght5(t_stack *s_a, t_stack *s_b, int i);
void	content_lenght5_part2(t_stack *s_a, t_stack *s_b, int i, int boolean);
void	content_lenght5_part3(t_stack *stack_a, t_stack *stack_b);
void	get_stack(t_stack *stack, int argc, char **argv);
int		is_number_valid(char *str);
int		is_stack_valid(t_stack *stack);

#endif