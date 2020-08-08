/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 13:02:04 by qsymond           #+#    #+#             */
/*   Updated: 2020/08/08 13:02:05 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t little_len;

	if (*little == '\0')
		return ((char *)big);
	little_len = ft_strlen((char *)little);
	while (*big != '\0' && len-- >= little_len)
	{
		if (*big == *little && ft_memcmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
