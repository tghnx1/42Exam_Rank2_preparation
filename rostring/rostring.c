/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkokorev <mkokorev@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:49:18 by mkokorev          #+#    #+#             */
/*   Updated: 2024/03/27 16:13:33 by mkokorev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void printstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}


int wordle(char *str)
{
	int len = 0;

	while(str[len] != ' ' && str[len])
		len++;
	return (len);
}

int sentlen(char *str)
{
        int len = 0;

        while(str[len])
                len++;
        return (len);
}

/*int sentle(char *old)
{
        int i = 0;

        while (old[i])
        {
                if (old[i] == ' ' && (!(old[i + 1]) || old[i + 1] == ' '))
			break ;
		else
			i++;
        }
        return (i);
}*/
/*
char *remove_last_spaces(char *old)
{
	int	i = 0;
	int j = 0;
	int len;
	char *new;

	len = sentlen(old);
	i = len - 1;
	while (old[i] == ' ')
	{
		old[i] = '\0';
		i--;
	}
	len = sentlen(old);
	new = malloc((len + 1) * sizeof(char));
		if (!new)
			return (0);
	
	 printf("old: |%s|\n", old);
	return (old);
}*/

int main (int argc, char **argv)
{
	char *word;
	char *sentence;
	int i = 0;
	int j = 0;
	int wordlen;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argc > 2)
	{
		printstr(argv[1]);
		write(1, "\n", 1);
		return (0);
	}
	while (*argv[1] == ' ' || *argv[1] == '\n' || *argv[1] == '\t')
		argv[1]++;
	wordlen = wordle(argv[1]);
	//write(1, argv[1], 1);
	word = (char *)malloc((wordlen + 1) * sizeof(char));
	if (!word)
		return (0);
	//printf("wordlen: %d\n", wordlen(argv[1]));
	while (j < wordlen)
	{
		word[j] = *argv[1];
		argv[1]++;
		j++;
	}
	word[j] = '\0';
	argv[1]++;
//	printf("\nword: |%s|\n", word);
//	printf("argv[1]: |%s|\n", argv[1]);
	//printf("argv[1]: |%s|\n", argv[1]);
	//sentence = remove_last_spaces(argv[1]);
	//printf("sentence: |%s|\n", sentence);
	
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
				break ;
			}
		}
			write(1, &argv[1][i], 1);
		i++;
	}
	if (argv[1][0] != ' ')
		write(1, " ", 1);
	printstr(word);
	write(1, "\n", 1);	
	return(0);
}
