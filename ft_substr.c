/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:24:19 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/28 00:53:46 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pointer;
	size_t	dimension;

	if (!s)
		return (NULL);
	dimension = ft_strlen(s);
	if (start > dimension || dimension == 0)
		return (ft_strdup(""));
	s += start;
	dimension -= start;
	if (dimension > len)
		dimension = len;
	pointer = (void *)ft_calloc(dimension + 1, sizeof(char));
	if (!pointer)
		return (NULL);
	len = dimension;
	while (dimension)
	{
		*(pointer++) = *(s++);
		--dimension;
	}
	*pointer = '\0';
	return (pointer - len);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[20] = "This is string.";
	char *result = ft_substr(str, 9, 2);
	printf("The  result is %s\n", result);
	return 0;
}

Descripción
Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
La substring empieza desde el índice ’start’ y tiene una longitud
máxima ’len’.
*/