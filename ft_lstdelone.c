/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:03:40 by rroca-go          #+#    #+#             */
/*   Updated: 2022/08/24 19:38:01 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	
}

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
/*
Parámetros
lst: el nodo a liberar.
del: un puntero a la función utilizada para liberar el contenido del nodo.
Descripción
Toma como parámetro un nodo ’lst’ y libera la memoria del contenido 
utilizando la función ’del’ dada como parámetro, además de liberar el nodo.
La memoria de ’next’ no debe liberarse.
*/