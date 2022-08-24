/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:26:05 by rroca-go          #+#    #+#             */
/*   Updated: 2022/08/24 18:58:53 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst && *lst)
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
	else
		*lst = new;
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*newlist1;
	t_list	newlist2;
	t_list	*newlist3;

	if(!(newlist1 = (void *)malloc(sizeof(t_list))))
		return (0);
	if(!(newlist3 = (void *)malloc(sizeof(t_list))))
		return (0);
	newlist1->content = "abc";
	newlist2.content = "XYZ";

	newlist3 = &newlist2;

	ft_lstadd_back(&newlist3, newlist1);

	printf("Tamaño = %lu \n", sizeof(newlist1->content));
	printf("Tamaño = %s \n", (char *)newlist1->content);
	printf("Tamaño = %lu \n", sizeof(newlist2.content));
	printf("Tamaño = %s \n", newlist2.content);
	return 0;
}

Parámetros
lst: el puntero al primer nodo de una lista.
new: el puntero a un nodo que añadir a la lista.
Valor devuelto
Nada
Descripción
Añade el nodo ’new’ al final de la lista ’lst’.
*/