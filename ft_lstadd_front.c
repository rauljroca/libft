/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 23:06:22 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/09 23:33:49 by rroca-go@st      ###   ########.fr       */
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
	t_list	*newlist1 = (void *)malloc(sizeof(t_list));
	t_list	*newlist2 = (void *)malloc(sizeof(t_list));

	newlist1->content = "abc";
	newlist2->content = "XYZ";

	char content[] = "Texto enviado a la lista.";
	t_list *result = ft_lstadd_front(newlist2, newlist1);

	printf("Contenido = %s \n", (char *)result->content);
	printf("Tamaño = %zu \n", sizeof(result->content));
	return 0;
}

Parámetros
lst: la dirección de un puntero al primer nodo de una lista.
new: un puntero al nodo que añadir al principio de la lista.
Valor devuelto
Nada
Descripción
Añade el nodo ’new’ al principio de la lista ’lst’.
*/