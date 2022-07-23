/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:39:42 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/23 13:33:09 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*buc;

	i = 0;
	buc = (unsigned char *)s;
	while (i < n)
	{
		buc[i] = 0;
		i++;
	}
	s = buc;
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	int n = 10;
	int	b[n];

	for (int i=0; i<n; i++)
		printf("%d ", b[i]);
	printf("\n ");
				
	bzero(b, n*sizeof(b[0]));
	ft_bzero(b, n*sizeof(b[0]));

	for (int i=0; i<n; i++)
		printf("%d ", b[i]);
	printf("\n ");

}
*/