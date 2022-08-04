/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go@student.42madrid.com <rroca-go    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:05:02 by rroca-go          #+#    #+#             */
/*   Updated: 2022/08/04 23:31:53 by rroca-go@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (count * size)
	{
		ptr = (char *)malloc(count * size);
		if (!ptr)
		{
			return (NULL);
			free(ptr);
		}
		while (i < (count * size))
		{
			ptr[i] = 0;
			i++;
		}
		return (ptr);
	}
	return (malloc(size));
}
/*
#include <stdio.h>
int	main(void)
{
	    int i, *ptr, *ptr2, sum = 0,sum2 = 0, num = 8539;
        ptr = calloc(num, sizeof(int));
		ptr2 = ft_calloc(num, sizeof(int));

		printf("direc1 = %p \nvalor1 = %p \n", &ptr, ptr);
		printf("direc2 = %p \nvalor2 = %p \n", &ptr2, ptr2);

        if (ptr == NULL || ptr2 == NULL) {
            printf("Error! memory not allocated. \n ");
            return(0);
        }
        printf("Sequence sum of the first %i terms \n ", num);
        for (i = 0; i < num; ++i)
		{
			*(ptr + i) = i;
            sum += *(ptr + i);
        }
        printf("Sum = %d \n ", sum);
        free(ptr);
        for (i = 0; i < num; ++i)
		{
			*(ptr2 + i) = i;
            sum2 += *(ptr2 + i);
        }
        printf("Sum2 = %d \n ", sum2);
        free(ptr2);

        return 0;
}
*/