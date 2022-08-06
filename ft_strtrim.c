/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:21:47 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/06 21:51:46 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*pointer;
	size_t		dimension;

	if (!s1 || !set)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	dimension = ft_strlen(s1);
	if (dimension > 0)
	{
		while (ft_strchr(set, s1[dimension - 1]))
			--dimension;
	}
	pointer = (void *)malloc(sizeof(char) * (dimension + 1));
	if (!pointer)
		return (NULL);
	ft_strlcpy(pointer, s1, dimension + 1);
	return (pointer);
}
/*
#include <stdio.h>
int	main(void)
{
	char *s1 = "BBsequeda!ABC";
	char *set = "ABC";
	char *pnt = ft_strtrim(s1, set);
	printf("ft_strjoin %s + %s = %s \n", s1, set, pnt);
}

Valor devuelto
La string recortada.
NULL si falla la reserva de memoria.
Descripción
Elimina todos los caracteres de la string ’set’ desde el principio y desde
el final de ’s1’, hasta encontrar un caracter no perteneciente a ’set’.
La string resultante se devuelve con una reserva de malloc(3)
*/