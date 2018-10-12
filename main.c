/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:07:53 by jtoty             #+#    #+#             */
/*   Updated: 2017/03/09 15:48:21 by jtoty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int unsigned i;
	int unsigned comp;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
		comp = i;
		write(1, "W1", 1);
		write(1, "\n", 1);
		printf("%d", comp);
	}
	i = 0;
	while (n <= comp && i <= (n - 1))
	{
		dest[i] = src[i];
		i++;
	}
	i = 0;
	while ((comp < n) && (i < comp))
	{
		dest[i] = src[i];
		i++;
	}
	while (comp < n)
	{
		dest[comp] = '\0';
		comp++;
	}
	return (dest);
}

int		main(int argc, const char *argv[])
{
	char	*dest;
	int		arg;

	alarm(5);
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)) || argc == 1)
		return (0);
	memset(dest, 0, 15);
	if ((arg = atoi(argv[1])) == 1)
	{
		memset(dest, 's', 13);
		if (dest != ft_strncpy(dest, "lorem", 6))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 15);
	}
	else if (arg == 2)
	{
		memset(dest, 's', 13);
		if (dest != ft_strncpy(dest, "lorem", 8))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 15);
	}
	else if (arg == 3)
	{
		memset(dest, 's', 13);
		if (dest != ft_strncpy(dest, "", 3))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 15);
	}
	else if (arg == 4)
	{
		memset(dest, 's', 13);
		if (dest != ft_strncpy(dest, "lorem ipsum", 3))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 15);
	}
	else if (arg == 5)
	{
		memset(dest, 's', 13);
		if (dest != ft_strncpy(dest, "lorem ipsum", 0))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 15);
	}
	else if (arg == 6)
	{
		memset(dest, 's', 5);
		if (dest != ft_strncpy(dest, "lorem ipsum", 1))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 15);
	}
	return (0);
}