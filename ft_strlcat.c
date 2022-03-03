/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:26:25 by msalmon-          #+#    #+#             */
/*   Updated: 2021/11/05 21:26:35 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[count] && i + count + 1 < dstsize)
	{
		dst[i + count] = src[count];
		count++;
	}
	if (i < dstsize)
		dst[i + count] = '\0';
	return (i + ft_strlen(src));
}
