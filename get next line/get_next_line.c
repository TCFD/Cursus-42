/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbp15 <zbp15@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:38:36 by rciaze            #+#    #+#             */
/*   Updated: 2022/12/09 18:24:23 by zbp15            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_fail(char **str, char **buffer_string)
{
	char	*temp;
	char	*temp2;
	int		i;

	free(*buffer_string);
	if (!str[0])
		return (NULL);
	i = 0;
	while (str[0][i] != '\n' && str[0][i])
		i++;
	temp = ft_strdup(str[0]);
	temp2 = ft_substr(str[0], 0, i + 1);
	*str = ft_substr(temp, i + 1, ft_strlen(temp) - i);
	return (temp2);
}

char	*cut_cut_cut3(char **str, char **buffer_string, int i)
{
	char	*temp;
	char	*temp2;
	int		count;
	int		count2;

	temp = ft_strdup(buffer_string[0]);	
	temp2 = ft_strdup(str[0]);
	count = i + 1;
	count2 = ft_strlen(temp) + ft_strlen(temp2);
	buffer_string[0] = ft_substr(ft_strjoin(str[0], buffer_string[0]), 0, count);
	str[0] = ft_substr(ft_strjoin(temp2, temp), count, count2 - count);
	return (buffer_string[0]);
}

char	*cut_cut_cut2(char **str, char **buffer_string, int i)
{
	char	*temp;
	char	*temp2;
	int		count;
	int		count2;

	temp = ft_strdup(buffer_string[0]);	
	temp2 = ft_strdup(str[0]);
	count = i + ft_strlen(temp2) + 1;
	count2 = ft_strlen(temp) + ft_strlen(temp2);
	buffer_string[0] = ft_substr(ft_strjoin(str[0], buffer_string[0]), 0, count);
	str[0] = ft_substr(ft_strjoin(temp2, temp), count, count2 - count);
	return (buffer_string[0]);
}

char	*cut_cut_cut(char **str, char **buffer_string, int fd)
{
	int		i;

	i = -1;
	if (*str)
	{
		while (str[0][++i])
		{
			if (str[0][i] == '\n')
				return (cut_cut_cut3(str, buffer_string, i));
		}
	}
	i = -1;
	while (buffer_string[0][++i])
	{
		if (buffer_string[0][i] == '\n')
			return (cut_cut_cut2(str, buffer_string, i));
	}
	str[0] = ft_strjoin(str[0], buffer_string[0]);
	//ft_bzero(buffer_string[0], ft_strlen(buffer_string[0]));
	return (get_next_line(fd));
}

char	*get_next_line(int fd)
{
	static char	*static_string;
	char		*buffer_string;
	int			boolean;

	if (BUFFER_SIZE < 0)
		return (NULL);
	buffer_string = malloc((BUFFER_SIZE + 1) * sizeof(char));
	boolean = 0;
	if (!buffer_string)
		return (NULL);
	ft_bzero(buffer_string, BUFFER_SIZE + 1);
	if (!read(fd, buffer_string, BUFFER_SIZE))
		boolean = 1;
	if (boolean && static_string)
		return (read_fail(&static_string, &buffer_string));
	else if (boolean)
	{
		free(buffer_string);
		return (NULL);
	}
	return (cut_cut_cut(&static_string, &buffer_string, fd));
}

/* int	main(void)
{
	int		fd = open("fichiertest.txt", O_RDONLY);
	int		i = 0;
	char	*tmp;

	while (i++ < 14)
	{
		tmp = get_next_line(fd);
		printf("%d : %s", i, tmp);
		free(tmp);
	}
	return (0);
} */
