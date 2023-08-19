/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:04:31 by msalmon-          #+#    #+#             */
/*   Updated: 2022/05/09 19:43:43 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

static unsigned int	ft_get_len(unsigned int n);

unsigned char	*ft_itoa_unsigned(unsigned int n)
{
	unsigned char	*str;
	unsigned int	i;
	unsigned long	dividir;

	dividir = n;
	i = ft_get_len(dividir) - 1;
	str = malloc(sizeof(char) * (ft_get_len(dividir) + 1));
	if (str == 0)
		return (0);
	if (dividir == -0)
		str[0] = '0';
	while (dividir > 0)
	{
		str[i] = (dividir % 10) + '0';
		dividir = dividir / 10;
		i--;
	}
	str[ft_get_len(n)] = '\0';
	return (str);
}

static unsigned int	ft_get_len(unsigned int n)
{
	unsigned int	i;

	i = 1;
	if (n == 0)
		return (i);
	else if (n > 0)
	{
		while (n >= 10)
		{
			n = n / 10;
			i++;
		}
	}
	else
		i++;
	return (i);
}
