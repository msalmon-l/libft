/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 21:07:27 by msalmon-          #+#    #+#             */
/*   Updated: 2021/11/12 21:07:39 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*origen;
	char	*destino;

	i = 0;
	origen = (char *)src;
	destino = (char *)dst;
	if (origen < destino && (origen + ft_strlen(src)) > destino)
	{
		while (n > 0 && destino)
		{
			destino[n - 1] = origen[n - 1];
			n--;
		}
	}
	else
	{
		ft_memcpy(destino, origen, n);
	}
	return (dst);
}
