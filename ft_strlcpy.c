/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:19:15 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/23 22:04:46 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t i;
	size_t src_len;

	i = 0;
	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
	if (!dstsize)
		return (src_len);
	while (src[i] != '\0' && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize < src_len)
		dst[dstsize - 1] = '\0';
	else if (dstsize != 0)
		dst[i] = '\0';
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