/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 13:01:24 by qsymond           #+#    #+#             */
/*   Updated: 2020/08/08 13:01:25 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**free_buff(char **buff, size_t j)
{
	while (j-- > 0)
	{
		free(buff[j]);
		buff[j] = NULL;
	}
	free(buff);
	buff = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**buff;
	size_t	i;
	size_t	j;
	size_t	word_num;

	if (!s ||\
			!(buff = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1))))
		return (NULL);
	j = 0;
	word_num = count_word(s, c);
	while (*s && j < word_num)
	{
		while (*s == c && *s != '\0')
			s++;
		i = 0;
		while (*(s + i) != '\0' && *(s + i) != c)
			i++;
		if (!(buff[j++] = ft_substr(s, 0, i)))
			return (free_buff(buff, j - 1));
		s = s + i;
	}
	buff[j] = 0;
	return (buff);
}
