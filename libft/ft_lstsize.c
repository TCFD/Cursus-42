/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:38:19 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/21 18:03:14 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/* int	main(void)
{
	t_list	*liste1;
	t_list	*liste2;
	t_list	*liste3;
	t_list	*liste4;

	liste1 = ft_lstnew((void *) 'a');
	liste2 = ft_lstnew((void *) 'b');
	liste3 = ft_lstnew((void *) 'c');
	liste4 = ft_lstnew((void *) 'd');

	ft_lstadd_front(&liste4, liste3);
	ft_lstadd_front(&liste3, liste2);
	ft_lstadd_front(&liste2, liste1);
	printf("%d", ft_lstsize(liste1));
} */
