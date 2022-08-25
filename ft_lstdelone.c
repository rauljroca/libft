/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:03:40 by rroca-go          #+#    #+#             */
/*   Updated: 2022/08/25 16:34:08 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}
/*
// MAIN IN PROGRESS
#include <stdio.h>
void the_function(del)
{
	free(&del);
}
int	main(void)
{
	t_list	*newlist1;
	if(!(newlist1 = (void *)malloc(sizeof(t_list))))
		return (0);
	newlist1->content = "000";
	printf("Tamaño = %lu \n", sizeof(newlist1->content));
	printf("Result = %s \n", (char *)newlist1->content);
	ft_lstdelone(newlist1, the_function);
	printf("Tamaño = %lu \n", sizeof(newlist1->content));
	printf("Result = %s \n", (char *)newlist1->content);
	return (0);
}

Parámetros
lst: el nodo a liberar.
del: un puntero a la función utilizada para liberar el contenido del nodo.
Descripción
Toma como parámetro un nodo ’lst’ y libera la memoria del contenido 
utilizando la función ’del’ dada como parámetro, además de liberar el nodo.
La memoria de ’next’ no debe liberarse.
*/