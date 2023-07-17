/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:26:39 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/16 11:54:15 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "ft.h"
#include "free.h"
#include <stdlib.h>

char	*make_substring(char	*dict_str)
{
	char	*str;
	int		i;

	str = malloc((ft_strlen(dict_str, '\n') + 1) * sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	while (dict_str[i] != '\n')
	{
		if (dict_str[i] == 0)
			return (0);
		str[i] = dict_str[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*get_str(char *dict_str)
{
	char	*str;

	while (*dict_str >= '0' && *dict_str <= '9')
		dict_str++;
	while (*dict_str == ' ' && *dict_str != 0 && *dict_str != '\n')
		dict_str++;
	if (*dict_str != ':')
		return (0);
	dict_str++;
	while (*dict_str == ' ' && *dict_str != 0 && *dict_str != '\n')
		dict_str++;
	str = make_substring(dict_str);
	if (str == 0)
		return (0);
	return (str);
}

int	get_num(char *dict_str)
{	
	int		i;
	char	nstr[12];

	i = 0;
	while (dict_str[i] >= '0' && dict_str[i] <= '9' && i < 11)
	{
		nstr[i] = dict_str[i];
		i++;
	}
	if (i == 0)
		return (-1);
	nstr[i] = 0;
	return (ft_atoi(nstr));
}

char	*next_line(char	*str)
{
	while (*str != '\n')
	{
		if (str == 0)
			return (0);
		str++;
	}
	while (*str == '\n')
	{
		if (str == 0)
			return (0);
		str++;
	}
	return (str);
}

t_dict	*make_dict(char	*dict_str)
{
	t_dict	*dict;
	int		size;
	int		i;

	size = dict_size(dict_str);
	dict = malloc((size + 1) * sizeof(t_dict));
	if (dict == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		dict[i].num = get_num(dict_str);
		dict[i].str = get_str(dict_str);
		if (dict[i].num == -1 || dict[i].str == 0)
		{	
			free_all(dict);
			return (0);
		}
		dict_str = next_line(dict_str);
		i++;
	}
	dict[i].str = 0;
	if (dict_contains_all(dict) == 0)
		return (0);
	return (dict);
}
