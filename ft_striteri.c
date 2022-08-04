/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 23:40:16 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/05 00:09:01 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
void the_function(unsigned int i, char *str)
{
	printf("Dentro de mi función: %c es index %d\n", *str, i);
}
int	main(void)
{
	char str[10] = "hello.";
	printf("Antes de ft_striteri: %s\n", str);
	ft_striteri(str, the_function);
	return 0;
}

Parámetros
s: La string que iterar.
f: La función a aplicar sobre cada carácter.
Valor devuelto
Nada
Descripción
A cada carácter de la string ’s’, aplica la función ’f’ dando como 
parámetros el índice de cada carácter dentro de ’s’ y la dirección 
del propio carácter, que podrá modificarse si es necesario.
*/