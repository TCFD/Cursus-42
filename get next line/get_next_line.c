/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:38:36 by rciaze            #+#    #+#             */
/*   Updated: 2022/12/08 12:57:15 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_fail(char **str, char **buffer_string)
{
	char	*temp;
	int		i;

	free(*buffer_string);
	if (!str[0])
		return (NULL);
	i = 0;
	while (str[0][i] != '\n' && str[0][i])
		i++;
	temp = ft_substr(str[0], 0, i + 1);
	*str = ft_substr(str[0], i + 1, ft_strlen(str[0]) - i);
	return (temp);
}

char	*cut_cut_cut(char **str, char **buffer_string, int fd)
{
	char	*temp;
	int		i;

	i = -1;
	while (buffer_string[0][++i])
	{
		if (buffer_string[0][i] == '\n')
		{
			temp = ft_strdup(buffer_string[0]);
			free (buffer_string[0]);
			buffer_string[0] = ft_strjoin(str[0], ft_substr(temp, 0, i + 1));
			str[0] = ft_substr(temp, i + 1, ft_strlen(str[0]) - i);
			free (temp);
			return (buffer_string[0]);
		}
	}
	str[0] = ft_strjoin(str[0], buffer_string[0]);
	ft_bzero(buffer_string[0], ft_strlen(buffer_string[0]));
	return (get_next_line(fd));
}

char	*get_next_line(int fd)
{
	static char	*static_string;
	char		*buffer_string;

	if (BUFFER_SIZE < 0)
		return (NULL);
	static_string = malloc((BUFFER_SIZE + 1) * sizeof(char));
	buffer_string = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer_string || !static_string)
		return (NULL);
	if (!read(fd, buffer_string, BUFFER_SIZE))
		return (read_fail(&static_string, &buffer_string));
	return (cut_cut_cut(&static_string, &buffer_string, fd));
}

int	main(void)
{
	int fd = open("fichiertest.txt", O_RDONLY);
	int	i = 0;
	char	*tmp;

	
	while (i++ < 10)
	{
		tmp = get_next_line(fd);
		printf("%d : %s", i, tmp);
		free(tmp);
	}
	return (0);
}
