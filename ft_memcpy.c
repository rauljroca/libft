/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:35:28 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/30 11:44:13 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*s1;
	char			*s2;
	unsigned int	i;

	s1 = (char *)dst;
	s2 = (char *)src;
	i = 0;
	if (n == 0 || src == dst)
		return (s1);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
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