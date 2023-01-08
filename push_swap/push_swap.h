/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 16:01:36 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/05 17:01:25 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int	bottom;
	int	top;
	int	content_lenght;
	int	number_of_elements;
	int	*content;
}	t_stack;

void	swap(t_stack *stack);
void	rotate(t_stack *stack);
void	print_stack(t_stack *stack);
void	reverse_rotate(t_stack *stack);

#endif