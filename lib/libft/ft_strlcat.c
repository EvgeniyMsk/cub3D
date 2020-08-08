/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 13:01:42 by qsymond           #+#    #+#             */
/*   Updated: 2020/08/08 13:01:43 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	size_dest;
	size_t	size_src;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size == 0)
		return (size_src);
	i = 0;
	if (size >= size_dest)
	{
		while (dest[i] != '\0')
			i++;
		j = 0;
		while (src[j] != '\0' && i + 1 < size)
			dest[i++] = src[j++];
		dest[i] = '\0';
	}
	if (size_dest > size)
		return (size_src + size);
	else
		return (size_dest + size_src);
}
