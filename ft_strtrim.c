/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:21:47 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/04 23:35:12 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	ptr = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]))
		len--;
	ptr = ft_substr(s1, 0, len + 1);
	return (ptr);
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