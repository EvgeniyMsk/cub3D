/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 13:02:13 by qsymond           #+#    #+#             */
/*   Updated: 2020/08/08 13:02:14 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (c == 0)
		return ((char *)s + i);
	i--;
	while (i >= 0 && s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
