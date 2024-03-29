/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:00:00 by msalmon-          #+#    #+#             */
/*   Updated: 2021/11/08 18:00:03 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	if (s == 0)
		return (0);
	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (char)c)
			return (&*ptr);
		ptr++;
	}
	if (*ptr == (char)c)
		return (&*ptr);
	return (0);
}
