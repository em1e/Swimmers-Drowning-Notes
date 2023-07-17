/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:57:54 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/17 15:45:00 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "free.h"

int	dict_size(char *str)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		if (*str == ':')
			count++;
		str++;
	}
	return (count);
}

int	num_in_dict(t_dict	*dict, int nb)
{
	int	i;

	i = 0;
	while (dict[i].str != 0)
	{
		if (dict[i].num == nb)
			return (1);
		i++;
	}
	free_all(dict);
	return (0);
}

int	dict_contains_all(t_dict	*dict)
{
	int	nb;

	nb = 0;
	while (nb < 20)
	{
		if (num_in_dict(dict, nb) == 0)
			return (0);
		nb++;
	}
	while (nb <= 100)
	{
		if (num_in_dict(dict, nb) == 0)
			return (0);
		nb += 10;
	}
	if (num_in_dict(dict, 1000) == 0)
		return (0);
	if (num_in_dict(dict, 1000000) == 0)
		return (0);
	if (num_in_dict(dict, 1000000000) == 0)
		return (0);
	return (1);
}
