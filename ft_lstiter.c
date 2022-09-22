/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:16:07 by rroca-go          #+#    #+#             */
/*   Updated: 2022/09/22 20:12:16 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>
void the_function(f)
{
	printf("content lst  %d \n", f);
}
int	main(void)
{
	t_list lst;
	t_list lst2;
	lst.next = &lst2;
	lst.content = "001 ";
	lst2.content = "002 ";
	printf("content lst  %s \n", lst.content);
	printf("content lst2 %s \n", lst2.content);
	ft_lstiter(&lst, the_function);
}

Parámetros
lst: un puntero al primer nodo.
f: un puntero a la función que utilizará cada nodo.
Descripción
Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo.
*/