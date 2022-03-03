/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalmon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:16:58 by msalmon-          #+#    #+#             */
/*   Updated: 2022/01/20 20:17:02 by msalmon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	c_words(char const *str, char caracter);
static	size_t	c_characters(char const *str, char caracter, size_t pos);
static	void		mem_free(char **str);
static	void		copy_words(char *cadena, char **str, char caracter);

char	**ft_split(char const *s, char c)
{
	char	*cadena;
	char	**str;
	size_t	x;

	x = 0;
	cadena = ft_strtrim(s, &c);
	str = malloc(sizeof(char *) * (c_words(cadena, c) + 1));
	if (str == 0)
		return (0);
	while (x < c_words(cadena, c))
	{
		str[x] = malloc(sizeof(char) * (c_characters(cadena, c, x) + 1));
		if (str[x] == 0)
		{
			mem_free(str);
			free(cadena);
			return (0);
		}
		x++;
	}
	copy_words(cadena, str, c);
	free(cadena);
	return (str);
}

static	size_t	c_words(char const *str, char caracter)
{
	size_t	count;
	size_t	alerta;
	size_t	i;

	count = 0;
	alerta = 1;
	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == caracter)
			alerta = 1;
		else if (alerta == 1)
		{
			alerta = 0;
			count++;
		}
		i++;
	}
	return (count);
}

static	size_t	c_characters(char const *str, char caracter, size_t pos)
{
	size_t	i;
	size_t	count;
	size_t	word;

	i = 0;
	count = 0;
	word = 0;
	while (str[i] && word <= pos)
	{
		if (pos == word && str[i] != caracter)
			count++;
		if ((str[i] == caracter) && (str[i + 1] != caracter))
			word++;
		i++;
	}
	return (count);
}

static	void	mem_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free (str);
}

static	void	copy_words(char *cadena, char **str, char c)
{
	size_t	x;
	size_t	y;
	size_t	i;

	x = 0;
	y = 0;
	while (x < c_words(cadena, c))
	{
		i = 0;
		while (y < ft_strlen(cadena))
		{
			if (cadena[y] == c && cadena[y + 1] != c)
				break ;
			if (cadena[y] != c)
			{	
				str[x][i] = cadena[y];
				i++;
			}
			y++;
		}
		str[x][i] = '\0';
		x++;
		y++;
	}
	str[x] = NULL;
}
