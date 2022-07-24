/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 22:33:43 by rroca-go@st       #+#    #+#             */
/*   Updated: 2022/07/25 00:05:10 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	unsigned int i;
	unsigned int dstlen;
	unsigned int srclen;

	i = 0;
	dstlen = 0;
	srclen = 0;
	if (dstsize == 0)
		return (0);
	while (dst[dstlen] != '\0')
		dstlen++;
	while (src[srclen] != '\0')
		srclen++;
	if (dstsize > dstlen)
	{
		while (i < dstsize - dstlen - 1 && src[i] != '\0')
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
		return (dstlen + srclen);
	}
	return (srclen + dstsize);
}
/*

#include <stdio.h>
#include <string.h>
int	main(void)
{
    char dst[12] = "Start: ";
    char src[4] = "end.";

    printf("dst1: %s \n src1: %s \n",dst,src);
    strlcat(dst, src, 12);
    printf("dst2: %s \n",dst);

    return(0);
}
*/