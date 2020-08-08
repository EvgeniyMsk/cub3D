/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsymond <qsymond@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 13:00:13 by qsymond           #+#    #+#             */
/*   Updated: 2020/08/08 13:00:14 by qsymond          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*head;

	if (!(head = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
