/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:21:40 by msalmon-          #+#    #+#             */
/*   Updated: 2021/11/17 17:21:44 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		len;
	int		count;
	int		i;

	if (s1 == 0)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	count = 0;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == 0)
		return (0);
	while (s1[i] && len > i)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[count] && len > i)
		ptr[i++] = s2[count++];
	ptr[i] = '\0';
	return (ptr);
}
