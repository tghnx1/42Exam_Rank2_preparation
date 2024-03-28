/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:18:01 by mkokorev          #+#    #+#             */
/*   Updated: 2024/03/28 13:32:00 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
		i++;
	i--;
	while (argv[1][i] == ' ' || argv[1][i] == '\n' || argv[1][i] == '\t')
		i--;
	while (argv[1][i] != ' ' && argv[1][i] != '\n' && argv[1][i] != '\t')
		i--;
	i++;
	while ((argv[1][i] != ' ' && argv[1][i] != '\n' && argv[1][i] != '\t') && argv[1][i])
	{
		write (1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
