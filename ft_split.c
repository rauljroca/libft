/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:35:30 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/28 00:48:21 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_breaks(const char *s, char c)
{
	size_t	i;
	size_t	button;

	i = 0;
	button = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			button = 0;
		else if (button == 0)
			button = ++i;
		s++;
	}
	return (i);
}

static size_t	ft_nmbrchrs(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(const char *s, char c)
{
	size_t	breaks;
	size_t	i;
	char	**split;
	size_t	nmbrchrs;

	breaks = ft_breaks(s, c);
	split = (char **)ft_calloc(breaks + 1, sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	nmbrchrs = 0;
	while (i < breaks)
	{
		while (*s == c)
			s++;
		nmbrchrs = ft_nmbrchrs((const char *)s, c);
		split[i] = (char *)ft_calloc(nmbrchrs + 1, sizeof(char));
		if (!split[i])
			free(split[i]);
		ft_strlcpy(split[i], s, nmbrchrs + 1);
		s = (ft_strchr(s, c));
		i++;
	}
	split[i] = 0;
	return (split);
}
/*
#include <stdio.h>
int	main(void)
{
	char **dest;
	char P[] = "      split       this for   me  !       ";
	char U = ' ';
	size_t	i = 0;

	printf("MAIN - P = %s \n", P);
	printf("MAIN - U = %c \n", U);
	dest = ft_split(P, U);
	while (dest[i])
	{
		printf("MAIN - %zu -> %s \n", i, dest[i]);
		i++;
	}
	return (0);
}

Valor devuelto
El array de nuevas strings resulatente de la separación.
NULL si falla la reserva de memoria.
Descripción
Reserva (utilizando malloc(3)) un array de strings resultante 
de separar la string ’s’ en substrings utilizando el caracter 
’c’ como delimitador. El array debe terminar con un puntero 
NULL.
*/