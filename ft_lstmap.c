/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:12:10 by rroca-go          #+#    #+#             */
/*   Updated: 2022/08/25 20:41:20 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if (!lst || !f || !del)
		return (lst);
	while (lst)
	{
		(*f)(lst->content);
		del(lst->content);
		lst = lst->next;
	}
	return (lst);
}

#include <stdio.h>
void the_function(f)
{
	printf("the_function f %d \n", f);
}
void the_function2(f)
{
	printf("the_function del %d \n", f);
}
int	main(void)
{
	void	*pntfn;
	pntfn = *(the_function);
	t_list lst;
	t_list lst2;
	lst.next = &lst2;
	lst.content = "001 ";
	lst2.content = "002 ";
	printf("content lst  %s \n", lst.content);
	printf("content lst2 %s \n", lst2.content);
	ft_lstmap(&lst, pntfn, the_function2);
}
/*
Parámetros
lst: un puntero a un nodo.
f: la dirección de un puntero a una función usada en la iteración de 
cada elemento de la lista.
del: un puntero a función utilizado para eliminar el contenido de un 
nodo, si es necesario.
Valor devuelto
La nueva lista.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc, free
Descripción
Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada nodo. 
Crea una lista resultante de la aplicación correcta y sucesiva de la 
función ’f’ sobre cada nodo. La función ’del’ se utiliza para eliminar 
el contenido de un nodo, si hace falta.
*/