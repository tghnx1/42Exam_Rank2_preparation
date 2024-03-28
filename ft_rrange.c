/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:33:17 by mkokorev          #+#    #+#             */
/*   Updated: 2024/03/28 14:07:47 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *arr;
	int diff;
	int i = 0;

	
	if (end < start)
	{
		diff = start - end;
		arr = (int *)malloc((diff + 1) * sizeof(int));
		while (i <= diff)
                {
                        arr[i] = end;
                        i++;
                        end++;
                }
	}
	else
	{	
		diff = end - start;
		arr = (int *)malloc((diff + 1) * sizeof(int));
		while (i <= diff)
                {
                        arr[i] = end;
                        i++;
                        end--;
                }
	}
	return (arr);
}
/*
int main ()
{
	int *arr;
	int i = 0;

	arr = ft_rrange(0, -3);
	while (i++ < 4)
	{
		printf("result: %d\n", *arr);
		arr++;
	}
	return (0);
}*/
