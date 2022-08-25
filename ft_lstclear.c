/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:01:02 by rroca-go          #+#    #+#             */
/*   Updated: 2022/08/25 18:17:58 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (lst && *lst)
	{
		tmp = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
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
	t_list	*newlist2;

	if(!(newlist1 = (void *)malloc(sizeof(t_list))))
		return (0);
	if(!(newlist2 = (void *)malloc(sizeof(t_list))))
		return (0);

	newlist1->next = newlist2;
	newlist1->content = "abc";
	newlist2->content = "XYZ";

	printf("Result = %s \n", (char *)newlist1->content);
	printf("Result = %s \n", (char *)newlist2->content);
	ft_lstclear(&newlist2, the_function);
	printf("Result = %s \n", (char *)newlist1->content);
	printf("Result = %s \n", (char *)newlist2->content);
	return (0);
}

Parámetros
lst: la dirección de un puntero a un nodo.
del: un puntero a función utilizado para eliminar el contenido de un nodo.
Funciones autorizadas
free
Descripción
Elimina y libera el nodo ’lst’ dado y todos los consecutivos de ese nodo, 
utilizando la función ’del’ y free(3).
Al final, el puntero a la lista debe ser NULL.
*/