/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:09:02 by mkokorev          #+#    #+#             */
/*   Updated: 2024/03/28 13:16:33 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
/*
int main()
{
	int a = 2;
	int b = 5;

	ft_swap(&a, &b);
	printf("%d, %d\n", a, b);
 return (0);
}*/
