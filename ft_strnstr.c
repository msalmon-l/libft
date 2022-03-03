/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:02:54 by msalmon-          #+#    #+#             */
/*   Updated: 2021/11/09 18:02:57 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	iterator;
	size_t	count;

	iterator = 0;
	count = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (iterator < len && haystack[iterator])
	{
		count = 0;
		while (needle[count] == haystack[iterator + count]
			&& needle[count] && iterator + count < len)
		{
			if (needle[count] == haystack[iterator + count]
				&& needle[count + 1] == '\0')
				return ((char *)haystack + iterator);
			count++;
		}
		iterator++;
	}
	return (0);
}
