/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:35:30 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/03 23:22:47 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
char	**ft_split(char const *s, char c)
{
	char	**arrayofstrings;
	int		i;
	int		j;

	printf("part = \n");
//	char **arrayofstrings2[] = {"AAA", "BBBBB", "BBBBB", "BBBBB"};
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (*(s + i))
		if (c == *(s + i))
			i++;
	arrayofstrings = (char **)malloc(sizeof(char) * (i + 1));
//	*arrayofstrings = arrayofstrings2;
	return (arrayofstrings);
}

int	main(void)
{
	char **dest;
	char P[] = "   hola papu que  tal   ";
	char U = ' ';
	int	i = 0;

	printf("part = \n");

	printf("%s \n \n ", P);
	printf("%c \n \n ", U);
	dest = ft_split(P, U);

	printf("part = %d -> %c \n", i, **dest);


	while (dest[i++])
		printf("part = %d -> %s \n", i, dest[i]);
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