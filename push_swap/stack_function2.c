/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_function2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:51:17 by zbp15             #+#    #+#             */
/*   Updated: 2023/01/12 16:22:24 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int	is_sorted(t_stack *stack)
{
	int	i;

	i = 0;
	while (++i < stack->content_lenght)
	{
		if (stack->content[i - 1] > stack->content[i])
			return (0);
	}
	return (1);
}

int	is_number_valid(char *str)
{
	int			i;
	long int	value;
	int			boolean;

	i = 0;
	value = 0;
	boolean = 0;
	if (str[i] == '-')
	{
		boolean = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value *= 10;
		value += str[i] - 48;
		i++;
	}
	if ((str[i] <= '0' || str[i] >= '9') && str[i] != '\0')
		return (0);
	if (boolean)
		value = -value;
	if (value > INT_MAX || value < INT_MIN)
		return (0);
	return (1);
}

int	is_stack_valid(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->content_lenght)
	{
		j = i + 1;
		while (j < stack->content_lenght)
		{
			if (stack->content[i] == stack->content[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	get_stack(t_stack *stack, int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (argc - i < argc)
	{
		if (!is_number_valid(argv[argc - i]))
		{
			free(stack->content);
			free(stack);
			write(0, "Error\n", 6);
			exit(0);
		}
		stack->content[argc - i - 1] = atoi(argv[argc - i]);
		i--;
	}
	if (!is_stack_valid(stack))
	{
		free(stack->content);
		free(stack);
		write(0, "Error\n", 6);
		exit(0);
	}
}
