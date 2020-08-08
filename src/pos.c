/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 23:17:28 by qsymond           #+#    #+#             */
/*   Updated: 2020/08/06 23:17:29 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	restrain_pos(t_pos *pos, t_pos *size)
{
	if (pos->x < 0)
		pos->x = 0;
	if (pos->x > size->x)
		pos->x = size->x - 1;
	if (pos->y < 0)
		pos->y = 0;
	if (pos->y > size->y)
		pos->y = size->y - 1;
}

void	set_pos(t_pos *pos, double x, double y)
{
	pos->x = x;
	pos->y = y;
}

void	copy_pos(t_pos *pos, t_pos *org)
{
	pos->x = org->x;
	pos->y = org->y;
}
