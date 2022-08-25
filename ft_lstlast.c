/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:36:26 by rroca-go          #+#    #+#             */
/*   Updated: 2022/08/25 13:34:59 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
int	main(void)
{
	char	text[] = "END";

	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*test;

	lst1 = (void *)malloc(sizeof(t_list));
	lst2 = (void *)malloc(sizeof(t_list));
	lst3 = (void *)malloc(sizeof(t_list));

	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = NULL;

	lst3->content = (void *)text;
	test = ft_lstlast(lst1);
	printf("\n%s\n", (char *)test->content);
}

Parámetros lst:
lst: el principio de la lista.
Valor devuelto
Último nodo de la lista.
Descripción
Devuelve el último nodo de la lista.
*/