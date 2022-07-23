/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:34:51 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/23 13:32:16 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*buc;

	i = 0;
	buc = (unsigned char *)b;
	while (i < len)
	{
		buc[i] = c;
		i++;
	}
	return (b = buc);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	int n = 10;
	int	b[n];
	int c = 4;

	for (int i=0; i<n; i++)
		printf("%d ", b[i]);
	printf("\n ");
				
//	memset(b, c, n*sizeof(b[0]));
	ft_memset(b, c, n*sizeof(b[0]));

	for (int i=0; i<n; i++)
		printf("%d ", b[i]);
	printf("\n ");

}
*/