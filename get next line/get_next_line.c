/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:40:00 by rciaze            #+#    #+#             */
/*   Updated: 2022/12/05 16:17:06 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*check(char *value_returned, int *boolean, char **str)
{
	int	i;

	i = -1;
	//printf("\nValue returned =  %s\n", value_returned);
	while (value_returned[++i] && *boolean)
	{
		if (value_returned[i] == '\n')
		{
			*str = ft_strdup(value_returned + i + 1);
			//printf("brefor substr %s\n", value_returned);
			value_returned = ft_substr(value_returned, 0, i + 1);
			//printf("Value returned in function =  %s\n", value_returned);
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
	
	value_returned = malloc((BUFFER_SIZE) * sizeof(char));
	if (!value_returned)
		return (NULL);
	boolean = 1;
	if (!read(fd, value_returned, BUFFER_SIZE))
		return (NULL);
	//printf("\nStr au debut  = %s\n", str);
	value_returned = ft_strjoin(str, value_returned);
	while (boolean)
	{
		value_returned = check(value_returned, &boolean, &str);
		if (boolean)
		{
			str = ft_strdup(value_returned);
			read(fd, value_returned, BUFFER_SIZE);
			temp = value_returned;
			value_returned = ft_strjoin(str, temp);
		}
	}
	return (value_returned);
}

int	main(void)
{
	int		fd;

	fd = open("fichiertest.txt", O_RDONLY);
	//get_next_line(fd);
	//get_next_line(fd);
	printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	//printf("%s", get_next_line(fd));
	//printf("%s", get_next_line(fd));
	return (0);
}
