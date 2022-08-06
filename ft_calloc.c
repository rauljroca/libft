/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:05:02 by rroca-go          #+#    #+#             */
/*   Updated: 2022/08/06 19:49:14 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*pointer;
	size_t	i;

	if (count * size == 0)
		return (malloc(0));
	if (SIZE_MAX / size < count)
		return (NULL);
	pointer = (void *)malloc(count * size);
	if (!pointer)
	{
		return (NULL);
		free(pointer);
	}
	i = 0;
	while (i < (count * size))
	{
		pointer[i] = 0;
		i++;
	}
	return (pointer);
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