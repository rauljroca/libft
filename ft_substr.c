/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:24:19 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/01 19:38:42 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			i;
	unsigned int	slen;

	if (!s)
		return (NULL);
	if (*s == '\0')
		return (ft_strdup(""));
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	ptr = malloc(len * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(ptr + i) = *(s + start);
		i++;
		start++;
	}
	*(ptr + len) = '\0';
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
//	char *s = "ABCDEFGHIJK";
	char *s = "i just want this part #############";
	size_t	size = 22;
	printf("ft_substr debería ser BCD --> %s \n", ft_substr(s, 0, size));

	char *ret = ft_substr(s, 0, size);
	if (!strncmp(ret, s, size))
	{
		free(ret);
		printf("TEST_SUCCESS \n");
	}
	free(ret);
	printf("TEST_FAILED \n");
}
*/
/*
Descripción
Reserva (con malloc(3)) y devuelve una substring de la string ’s’.
La substring empieza desde el índice ’start’ y tiene una longitud
máxima ’len’.
*/