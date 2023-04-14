/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpouzet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 18:50:16 by gpouzet           #+#    #+#             */
/*   Updated: 2023/04/14 12:39:43 by gpouzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../list.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		ct;

	ct = 0;
	tmp = lst;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		ct++;
	}
	return (ct);
}
