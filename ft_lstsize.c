/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:50:27 by rroca-go          #+#    #+#             */
/*   Updated: 2022/09/22 20:12:26 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	if (!lst)
		return (0);
	i = 0;
	while (lst && ++i)
		lst = lst->next;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*newlist1;
	t_list	newlist2;

	newlist2.content = "XYZa";
	newlist1 = (void *)malloc(sizeof(t_list));
	newlist1 = &newlist2;

	printf("\n\t hi \n\n");
	printf("\n\t %d \n\n", ft_lstsize(newlist1));
	return (0);
}

Parámetros lst:
el principio de la lista.
Valor devuelto
La longitud de la lista.
Descripción
Cuenta el número de nodos de una lista.
*/
