/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 22:18:16 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/04 23:21:18 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc((ft_strlen(s)) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>
char my_func(unsigned int i, char str)
{
	printf("My inner function: index = %d and %c\n", i, str);
	return str - 32;
}
int	main(void)
{
	char str[10] = "hello.";
	printf("The result is %s\n", str);
	char *result = ft_strmapi(str, my_func);
	printf("The result is %s\n", result);
	return 0;
}

/*
Parámetros
s: La string que iterar.
f: La función a aplicar sobre cada carácter.
Valor devuelto
La string creada tras el correcto uso de ’f’ sobre cada carácter.
NULL si falla la reserva de memoria.
Descripción
A cada carácter de la string ’s’, aplica la función ’f’ dando como 
parámetros el índice de cada carácter dentro de ’s’ y el propio carácter.
Genera una nueva string
*/