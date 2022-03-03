/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:59:18 by msalmon-          #+#    #+#             */
/*   Updated: 2021/11/04 19:59:41 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*origen;
	char		*dest;
	size_t		i;

	origen = src;
	dest = dst;
	i = 0;
	if (origen == 0 && dest == 0)
		return (0);
	while (i < n)
	{
		dest[i] = origen[i];
		i++;
	}
	return (dest);
}
