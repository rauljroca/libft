/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 20:12:31 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/28 01:01:03 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	ptr = (void *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		ptr[j++] = s1[i++];
	i = 0;
	while (s2[i])
		ptr[j++] = s2[i++];
	ptr[j] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	char *s1 = "ABCDE";
	char *s2 = "FGHIJK";
	char *pointer = ft_strjoin(s1, s2);
	printf("ft_strjoin %s + %s = %s \n", s1, s2, pointer);
}
*/
/*
Descripción
Reserva (con malloc(3)) y devuelve una nueva string,
formada por la concatenación de ’s1’ y ’s2’.
*/