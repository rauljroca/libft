/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:06:22 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/24 11:51:37 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*newlist1;
	t_list	newlist2;
	t_list	*newlist3;

	newlist1 = (void *)malloc(sizeof(t_list));
	newlist3 = (void *)malloc(sizeof(t_list));

	newlist1->content = "abc";
	newlist2.content = "XYZa";

	newlist3 = &newlist2;

	ft_lstadd_front(&newlist3, newlist1);

	printf("Tamaño = %lu \n", sizeof(newlist1->content));
	printf("Tamaño = %s \n", (char *)newlist1->content);
	printf("Tamaño = %lu \n", sizeof(newlist2.content));
	printf("Tamaño = %s \n", newlist2.content);
	return 0;
//	printf("Contenido = %s \n", (char *)result2->content);
//	char content[] = "Texto enviado a la lista.";
}

Parámetros
lst: la dirección de un puntero al primer nodo de una lista.
new: un puntero al nodo que añadir al principio de la lista.
Valor devuelto
Nada
Descripción
Añade el nodo ’new’ al principio de la lista ’lst’.
*/