/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:35:30 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/06 22:09:09 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_numstring(const char *s, char c)
{
	size_t	i;
	size_t	mark;

	i = 0;
	mark = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			mark = 0;
		else if (mark == 0)
		{
			mark = 1;
			i++;
		}
		s++;
	}
	return (i);
}

static size_t	ft_numchar(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	**ft_free_split(const char **split, size_t len_split)
{
	while (len_split--)
		free((void *)split[len_split]);
	free(split);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	/*
	char	**split;
	size_t	len;
	size_t	i;
	size_t	sl;

	i = 0;
	sl = 0;
	len = ft_numstring(s, c);
	split = (char **)malloc(sizeof(char *) * (len + 1));
	if (!split)
		return (NULL);
	while (i < len)
	{
		while (*s == c)
			s++;
		sl = ft_numchar((const char *)s, c);
		split[i] = (char *)malloc(sizeof(char) * sl + 1);
		if (!split[i])
			return (ft_free_split((const char **)split, len));
		ft_strlcpy(split[i], s, sl + 1);
		s = (ft_strchr(s, (int)c));
		i++;
	}
	split[i] = 0;
	return (split);
	*/
}
/*
int	main(void)
{
	char **dest;
	char P[] = "   hello word   ";
	char U = ' ';
	size_t	i = 0;

	printf("part = \n");

	printf("%s \n \n ", P);
	printf("%c \n \n ", U);
	dest = ft_split(P, U);

	printf("part = %zu -> %c \n", i, **dest);

	while (dest[i++])
		printf("part = %zu -> %s \n", i, dest[i]);
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