/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:49:18 by msalmon-          #+#    #+#             */
/*   Updated: 2022/02/01 16:49:29 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*siguiente;

	while (*lst)
	{
		siguiente = (**lst).next;
		ft_lstdelone((*lst), del);
		*lst = siguiente;
	}
	*lst = NULL;
}
