/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 01:17:39 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/08/08 22:55:10 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	newlist = (void *)malloc(sizeof(t_list));
	if (!newlist)
	{
		return (NULL);
		free(newlist);
	}
	newlist->content = content;
	newlist->next = NULL;
	return (newlist);
}

#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char content[] = "Texto enviado a la lista.";

	t_list *result = ft_lstnew((void *)content);
	printf("Contenido = %s \n", (char *)result->content);
	printf("Tamaño = %zu \n", sizeof(result->content));
	return 0;
}
/*
Parámetros content:
el contenido con el que crear el nodo.
Valor devuelto
El nuevo nodo
Funciones autorizadas
malloc
Descripción
Crea un nuevo nodo utilizando malloc(3). La variable miembro ’content’ 
se inicializa con el contenido del parámetro ’content’. La variable
’next’, con NULL.
*/