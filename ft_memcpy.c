/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:35:28 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/23 14:24:49 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*pointsrc;
	char	*pointdst;

	if (
		(dst == src)
		|| n == 0
	)
		return (0);
	pointsrc = (char *)src;
	pointdst = (char *)dst;
	while (n)
	{
		pointdst[n-1] = pointsrc[n-1];
		n--;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int	n = 4;
	int	dst[] = {2, 4, 6, 8};
	int	src[] = {10, 11, 12, 13};

	for (int i = 0; i < n; i++)
	{
		printf("dst1: %d \t src1: %d \n", dst[i], src[i]);
	}
	printf("\n");
//	memcpy(dst, src, 5);
	ft_memcpy(dst, src, 5);
	for (int i = 0; i < n; i++)
	{
		printf("dst2: %d \t src2: %d \n", dst[i], src[i]);
	}
	printf("\n");
}
*/