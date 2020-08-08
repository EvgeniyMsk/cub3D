/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 13:02:21 by qsymond           #+#    #+#             */
/*   Updated: 2020/08/08 13:02:22 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	char	*buff;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	len_s1 = ft_strlen(s1);
	while (ft_strchr(set, *(s1 + len_s1)) && len_s1 > 0)
		len_s1--;
	if (!(buff = ft_substr(s1, 0, len_s1 + 1)))
		return (NULL);
	return (buff);
}
