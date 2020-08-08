/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 13:01:13 by qsymond           #+#    #+#             */
/*   Updated: 2020/08/08 13:01:14 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	n2;

	if (n < 0)
		ft_putchar_fd('-', fd);
	n2 = n < 0 ? (unsigned int)(n * (-1)) : (unsigned int)n;
	if (n2 >= 10)
		ft_putnbr_fd(n2 / 10, fd);
	ft_putchar_fd(n2 % 10 + '0', fd);
}
