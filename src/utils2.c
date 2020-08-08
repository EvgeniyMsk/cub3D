/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 23:18:05 by qsymond           #+#    #+#             */
/*   Updated: 2020/08/06 23:18:06 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	free_machine(t_game *game)
{
	int i;

	i = -1;
	while (++i < game->config.rows)
	{
		if (game->config.map[i])
			free(game->config.map[i]);
	}
	free(game->config.map);
	i = -1;
	while (++i < TEXTURES - 3)
	{
		if (game->config.tex[i].texture)
			free(game->config.tex[i].texture);
	}
}

int		free_line(char *line, int ret)
{
	free(line);
	return (ret);
}

char	*update_temp(char *temp, char *line)
{
	char *temp2;
	char *temp3;

	temp2 = ft_strjoin(line, "\n");
	temp3 = ft_strjoin(temp, temp2);
	if (*temp && temp)
	{
		free(temp);
		temp = NULL;
	}
	free(temp2);
	return (temp3);
}
