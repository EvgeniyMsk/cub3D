/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 13:00:05 by qsymond           #+#    #+#             */
/*   Updated: 2020/08/08 13:00:06 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*curr;
	int		count;

	count = ft_lstsize(lst);
	curr = lst;
	while (count > 1)
	{
		curr = curr->next;
		count--;
	}
	return (curr);
}
