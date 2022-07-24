/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:19:15 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/24 23:18:21 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int i;
	unsigned int src_len;

	src_len = 0;
	if (!src)
		return (0);
	while (src[src_len] != 0)
	{
		src_len++;
	}
	if (dstsize > 0)
	{
		i = 0;
		while (src[i] != 0 && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dst[] = {"uvwxyz"};
	char	src[] = {"ABCDEF"};

	printf("src1: %s \t dst1: %s \n", src, dst);
//	strlcpy(dst, src, 4); //dst2: ABC
	ft_strlcpy(dst, src, 4);
	printf("src2: %s \t dst2: %s \n", src, dst);
}
*/