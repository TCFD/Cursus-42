/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:40:00 by rciaze            #+#    #+#             */
/*   Updated: 2022/12/06 17:03:55 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*check(char *value_returned, int *boolean, char **str)
{
	int	i;

	i = -1;
	while (value_returned[++i] && *boolean)
	{
		if (value_returned[i] == '\n')
		{
			*str = ft_strdup(value_returned + i + 1);
			value_returned = ft_substr(value_returned, 0, i + 1);
			*boolean = 0;
		}
		else
			*boolean = 1;
	}
	return (value_returned);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*value_returned;
	int			boolean;
	char		*temp;

	value_returned = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!value_returned)
		return (NULL);
	ft_bzero(value_returned, BUFFER_SIZE + 2);
	boolean = 1;
	if (!read(fd, value_returned, BUFFER_SIZE) && !str)
		return (NULL);
	value_returned = ft_strjoin(str, value_returned);
	while (boolean)
	{
		value_returned = check(value_returned, &boolean, &str);
		if (!boolean)
			return (value_returned);
		temp = ft_strdup(value_returned);
		ft_bzero(value_returned, BUFFER_SIZE + 2);
		boolean = read(fd, value_returned, BUFFER_SIZE);
		value_returned = ft_strjoin(temp, value_returned);
	}
	return (value_returned);
}

/* int	main(void)
{
	int		fd;

	fd = open("fichiertest.txt", O_RDONLY);
	//get_next_line(fd);
	//printf("\n\n\n");
	//get_next_line(fd);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	//printf("%s", get_next_line(fd));
	//printf("%s", get_next_line(fd));
	return (0);
}
 */