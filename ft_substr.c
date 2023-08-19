/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 21:08:53 by msalmon-          #+#    #+#             */
/*   Updated: 2022/02/02 18:33:09 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_memory(char const *str, unsigned int start, size_t len_str);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = NULL;
	if (s && start > ft_strlen(s))
	{
		ptr = malloc(1);
		if (ptr == 0)
			return (0);
		ptr[i] = s[ft_strlen(s)];
	}
	else if (s)
	{
		ptr = malloc(sizeof(char) * (ft_len_memory(s, start, len) + 1));
		if (ptr == 0)
			return (0);
		while (s[start] && len > i)
			ptr[i++] = s[start++];
		ptr[i] = '\0';
	}
	return (ptr);
}

static size_t	ft_len_memory(char const *str, unsigned int start, size_t len_str)
{
	size_t	memory;

	memory = len_str;
	if (start < ft_strlen(str) && ft_strlen(str) - start < len_str)
		memory = ft_strlen(str) - start;
	return (memory);
}
