/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 23:18:00 by qsymond           #+#    #+#             */
/*   Updated: 2020/08/06 23:18:02 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

double	max(double a, double b)
{
	if (a > b)
		return (a);
	return (b);
}

int		is_upper(int x)
{
	if (x >= 65 && x <= 90)
		return (1);
	return (0);
}

int		is_space(int x)
{
	if ((x >= 9 && x <= 13) || x == 32)
		return (1);
	return (0);
}
