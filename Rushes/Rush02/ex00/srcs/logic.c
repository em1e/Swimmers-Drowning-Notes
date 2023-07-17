/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkettune <vkettune@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:04:51 by vkettune          #+#    #+#             */
/*   Updated: 2023/07/16 16:21:20 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "ft.h"

void	print_dict(t_dict	*dict, int n, int *first)
{
	int	i;

	if (*first == 0)
		ft_putstr(" ");
	*first = 0;
	i = 0;
	while (dict[i].str != 0)
	{
		if (dict[i].num == n)
			ft_putstr(dict[i].str);
		i++;
	}
}

void	print_small(t_dict *dict, int nb, int *first)
{
	int	n;

	if (nb >= 100)
	{
		n = nb / 100;
		print_dict(dict, n, first);
		print_dict(dict, 100, first);
		nb = nb % 100;
	}
	if (nb < 20 && nb > 9)
	{
		print_dict(dict, nb, first);
		return ;
	}
	if (nb > 19)
	{
		n = (nb / 10) * 10;
		print_dict(dict, n, first);
		nb = nb % 10;
	}
	if (nb > 0)
	{
		print_dict(dict, nb, first);
	}
}

void	print_big(t_dict *dict, unsigned int nb, int size, int *first)
{
	int	n;

	n = nb / size;
	n = n % 1000;
	if (n > 0)
	{
		print_small(dict, n, first);
		print_dict(dict, size, first);
	}
}

void	find_num(t_dict	*dict, unsigned int nb)
{
	int	f;
	int	*first;

	f = 1;
	first = &f;
	if (nb == 0)
	{
		print_dict(dict, nb, first);
		ft_putstr("\n");
		return ;
	}
	if (nb >= 1000000000)
		print_big(dict, nb, 1000000000, first);
	if (nb >= 1000000)
		print_big(dict, nb, 1000000, first);
	if (nb >= 1000)
		print_big(dict, nb, 1000, first);
	print_small(dict, nb % 1000, first);
	ft_putstr("\n");
}
