/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 12:59:04 by qsymond           #+#    #+#             */
/*   Updated: 2020/08/08 12:59:05 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *buff;

	if (!(buff = (void *)malloc(size * nmemb)))
		return (NULL);
	ft_bzero(buff, size * nmemb);
	return (buff);
}
