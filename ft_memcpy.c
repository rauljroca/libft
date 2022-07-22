/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:35:28 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/22 21:35:29 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <string.h>
#include <stdio.h>

void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n) {

	size_t			i;
	unsigned char	*buc;

	if (src) { i = 0; }
// https://github.com/rchallie/libft/blob/master/ft_memcpy.c
// https://cdn.intra.42.fr/pdf/pdf/55911/es.subject.pdf
	i = 0;
	buc = (unsigned char *)dst;
	while (i < n)
	{
		buc[i] = 2;
		i++;
	}
	return (dst = buc);

}

int	main(void)
{
	int n = 4;
	int	b[n];
	int	a[2];

	for (int i=0; i<n; i++) {
		printf("B1: %d \n", b[i]);
		printf("A1: %d \n", a[i]);
	}

//	memcpy(b, a, 2);
	ft_memcpy(b, a, 2);

	for (int i=0; i<n; i++) {
		printf("B2: %d \n", b[i]);
		printf("A2: %d \n", a[i]);
	}
	printf("\n");

}
