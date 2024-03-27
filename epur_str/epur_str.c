/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:17:28 by mkokorev          #+#    #+#             */
/*   Updated: 2024/03/27 13:46:26 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i;
       i = 0;

	while (argv[1][i] == ' ' || argv[1][i] == '\n' || argv[1][i] == '\t')
		i++;
	while (argv[1][i])
	{
		if ((argv[1][i] == ' ' || argv[1][i] == '\n' || argv[1][i] == '\t'))
		{
			while ((argv[1][i] == ' ' || argv[1][i] == '\n' || argv[1][i] == '\t'))
				i++;
			if (argv[1][i])
				write (1, " ", 1);
			else
			{
				write(1, "\n", 1);
				return (0);
			}
		}
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
