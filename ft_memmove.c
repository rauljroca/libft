/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:21:03 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/23 19:49:48 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*pointsrc;
	char	*pointdst;

	pointsrc = (char *)src;
	pointdst = (char *)dst;
	if (dst == src)
		return (dst);
	while (len--)
		pointdst[len] = pointsrc[len];
	
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[] = {"ABCDEF"};
	char	dst[] = {"uvwxyz"};

	printf("src1: %s \t dst1: %s \n", src, dst);
//	memmove(dst, src, 3);
	ft_memmove(dst, src, 3);
	printf("src2: %s \t dst2: %s \n", src, dst);
}
*/