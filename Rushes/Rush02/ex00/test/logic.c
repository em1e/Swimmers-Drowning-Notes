/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:04:51 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/15 19:09:53 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#include "dict.h"

t_dict	*make_test_dict(void);
void	ft_putstr(char *str);

void	print_loop(t_dict	*dict, int n, char *str)
{
	int	i;
	int	print;

	i = 0;
	while (n[i] != '\0')
	{
		print = n[i];
		print_dict(dict, print);
		i++;
	}
	ft_putchar(*str);
}

void	find_num(t_dict	*dict, int nb, int c)
{
	int	nbc;
	int	n;

	if (nbc / 1000000000 != 0)
	{
		n = nbc / 1000000000;
		printf("%d\n", n);
		print_loop(dict, n);
		ft_putstr("billion");
	}
	if (nbc / 1000000 != 0)
	{
		n = nbc / 1000000;
		n = n % 1000;
		printf("%d\n", n);
		print_loop(dict, n);
		ft_putstr("million");
	}
	if (nbc / 1000 != 0)
	{
		n = nbc / 1000;
		n = n % 1000;
		printf("%d\n", n);
		print_loop(dict, n);
		ft_putstr("thousand");
	}
}

void	print_dict(t_dict	*dict, int n)
{
	int	i;

	i = 0;
	while (dict[i].str != 0)
	{
		if (dict[i].num == nb)
		{
			printf("%s\n", dict[i].str);
			i++;
		}
		else
			i++;
	}
}
