/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rroca-go <rroca-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:44:37 by rroca-go          #+#    #+#             */
/*   Updated: 2022/07/30 19:38:00 by rroca-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;
	int		count;

	count = 0;
	while (*(s1 + count))
		count++;
	str = (char *)malloc(sizeof(*s1) * (count + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char s1[] = "Esestringde18chars";
	char *pointer;

    int i, sum = 0, num = 1;

    pointer = ft_strdup(s1);

	printf("direc1 = %p \nvalor1 = %p \n", &pointer, pointer);

    if (pointer == NULL) {
        printf("Error! memory not allocated. \n ");
        return(0);
    }
    printf("Sequence sum of the first %i terms \n ", num);
    for (i = 0; i < num; ++i)
	{
		*(pointer + i) = i;
        sum += *(pointer + i);
    }
    printf("pointer sum = %d \n ", sum);
    free(pointer);

    return 0;
}
*/