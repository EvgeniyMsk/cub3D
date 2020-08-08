/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 12:59:30 by qsymond           #+#    #+#             */
/*   Updated: 2020/08/08 12:59:31 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		find_jaritsu(int n)
{
	int				jaritsu;
	unsigned int	n2;

	jaritsu = 1;
	n2 = (n < 0 ? (unsigned int)(n * (-1)) : (unsigned int)n);
	while (n2 >= 10)
	{
		n2 = n2 / 10;
		jaritsu++;
	}
	return (jaritsu);
}

char	*ft_itoa(int n)
{
	int				jaritsu;
	char			*buff;
	unsigned int	n2;

	jaritsu = (n < 0 ? find_jaritsu(n) + 1 : find_jaritsu(n));
	if (!(buff = (char *)malloc(sizeof(char) * (jaritsu + 1))))
		return (NULL);
	buff[jaritsu] = '\0';
	n2 = (n < 0 ? (unsigned int)n * (-1) : (unsigned int)n);
	while (jaritsu > 0)
	{
		buff[jaritsu - 1] = (n2 % 10) + '0';
		n2 = n2 / 10;
		jaritsu--;
	}
	if (n < 0)
		buff[0] = '-';
	return (buff);
}
