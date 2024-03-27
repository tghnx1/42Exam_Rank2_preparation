/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:01:26 by mkokorev          #+#    #+#             */
/*   Updated: 2024/03/27 13:15:07 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	int i = 2;

	if (n == 1)
		return (1);
	if ((int)n < 0)
		return (0);
	while (i <= n)
	{
		if (i == n)
			return(1);
		else
			i = i * 2;
	}
	return (0);
}
/*
int main()
{
	printf("result: %d\n", is_power_of_2(1/2));
	return (0);
}*/
