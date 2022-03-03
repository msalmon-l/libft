/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:11:20 by msalmon-          #+#    #+#             */
/*   Updated: 2021/11/17 19:11:24 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_init(char const *ptr1, char const *ptr2);
static size_t	get_fin(char const *ptr1, char const *ptr2, size_t const pos1);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	i;
	size_t	end;
	size_t	size_memori;

	i = 0;
	if (s1 == 0)
		return (0);
	start = get_init(s1, set);
	end = get_fin(s1, set, start);
	size_memori = (ft_strlen(s1) - start - (ft_strlen(s1) - end));
	ptr = malloc(sizeof(char) * size_memori + 1);
	if (ptr == 0)
		return (0);
	while (start < end)
	{
		ptr[i] = s1[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static size_t	get_init(char const *ptr1, char const *ptr2)
{
	size_t	x;
	size_t	y;

	x = 0;
	while (x < ft_strlen(ptr1))
	{
		y = 0;
		while (y < ft_strlen(ptr2))
		{
			if (ptr1[x] == ptr2[y])
				break ;
			y++;
		}
		if (y == ft_strlen(ptr2))
			break ;
		x++;
	}
	return (x);
}

static size_t	get_fin(char const *ptr1, char const *ptr2, size_t const pos1)
{
	size_t	x;
	size_t	y;

	x = ft_strlen(ptr1) - 1;
	while (x > pos1)
	{
		y = 0;
		while (y < ft_strlen(ptr2))
		{
			if (ptr1[x] == ptr2[y])
				break ;
			y++;
		}
		if (y == ft_strlen(ptr2))
			break ;
		x--;
	}
	return (x + 1);
}
