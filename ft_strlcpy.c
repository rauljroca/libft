/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:19:15 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/30 16:55:52 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
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
//	ft_strlcpy(dst, src, 4);
	strlcpy(((void *)0), ((void *)0), 10);
	printf("src2: %s \t dst2: %s \n", src, dst);
}
*/