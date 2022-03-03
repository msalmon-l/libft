/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:40:08 by msalmon-          #+#    #+#             */
/*   Updated: 2021/11/08 19:40:10 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*ptr;

	ptr = (char *)s;
	len = ft_strlen(ptr);
	if ((char)c == '\0')
		return (&ptr[len]);
	while (len >= 0)
	{
		if (ptr[len] == (char)c)
			return (&ptr[len]);
		len--;
	}
	return (0);
}
