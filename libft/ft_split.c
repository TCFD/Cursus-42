/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rciaze <rciaze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:53:51 by rciaze            #+#    #+#             */
/*   Updated: 2022/11/18 15:36:32 by rciaze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	how_many_words(char const *s, char c)
{
	int		compteur;
	int		i;

	i = 0;
	compteur = 0;
	if (s[0] == c)
		compteur -= 1;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i - 1] == c && s[i + 1])
			compteur++;
		i++;
		while (s[i] == c)
			i++;
	}
	return (compteur + 1);
}

void	attribution(char *s, char **str, int len, int j)
{
	int	i;

	i = 0;
	str[j] = malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		str[j][i] = s[i];
		i++;
	}
	str[j][i] = '\0';
	//printf("Len = %d, mot = %s\n", len, str[j]);
}

char	**word_len(char *s, char c, char **str, int s_len)
{
	int	i;
	int	len;
	int	j;
	int	boolean;
	int	compteur;

	i = -1;
	j = 0;
	while (s_len > i++)
	{
		len = 0;
		boolean = 0;
		compteur = i;
		while (s[i] != c && s[i])
		{
			len++;
			boolean = 1;
			i++;
		}
		if (boolean)
			attribution(&s[compteur], str, len, j++);
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		s_len;

	s_len = 0;
	if (how_many_words(s, c) == 1)
	{
		str = malloc(1 * sizeof(char *));
		str[0] = NULL;
		return (str);
	}
	str = (char **)malloc((how_many_words(s, c) + 1) * sizeof(char *));
	while (s[s_len])
		s_len++;
	word_len((char *)s, c, str, s_len);
	return (str);
}

/* int	main(void)
{
	char 	const	*str = "ceci est un test ma poule";
	char 	**s;
	int		i;
	int		j;
	
	i = 0;
	s = ft_split(str , 'e');
	//printf("%s\n", s[0]);
	while (s[i])
	{
		j = 0;
		while (s[i][j])
		{
			write(1, &s[i][j], 1);
			j++;
		}
		i++;
	}
	return (1);
} */
