/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:26:39 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/15 13:24:58 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <stdlib.h>

/* Count the size of the dict based on the amount of ':' */
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

int	dict_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != 0 && *str != '\n')
	{
		str++;
		i++;
	}
	return (i);
}

char	*make_substring(char	*dict_str)
{
	char	*str;

	str = malloc((dict_strlen(dict_str) + 1) * sizeof(char));
	if (str == 0)
		return (0);
	while (*dict_str != '\n')
	{
		if (*dict_str == 0)
			return (0);
		*str = *dict_str;
		dict_str++;
		str++;
	}
	*str = 0;
	return (str);
}

char	*get_str(char *dict_str)
{
	t_dict	*ptr;
	char	*nstr;

	if (*dict_str < 48 || *dict_str > 57)
		return (0);
	entry.num = *dict_str - '0';
	dict_str++;
	while (*dict_str == ' ' && *dict_str != 0 && *dict_str != '\n')
		dict_str++;
	if (*dict_str != ':')
		return (0);
	dict_str++;
	while (*dict_str == ' ' && *dict_str != 0 && *dict_str != '\n')
		dict_str++;
	entry.str = make_substring(dict_str);
	if (entry.str == 0)
		return (0);
	return (1);
}

int	get_num(char *dict_str)
{	
	int		i;
	char	nstr[11];

	i = 0;
	while (*dict_str >= '0' && *dict_str < '9' && i < 11)
	{
		nstr[i] = *dict_str;
		i++;

	}
}

t_dict	*make_dict(char	*dict_str)
{
	t_dict	*dict;
	int		i;
	int		success;

	/* Allocate memory according to the size of the dict (= null terminator) */
	dict = malloc((dict_size(dict_str) + 1) * sizeof(t_dict));
	if (dict == 0)
		return (0);

	/* Add each entry to the dict */
	i = 0;
	while (i < dict_size(dict_str))
	{
		dict[i].num = get_num(dict_str);
		dict[i].str = "zero";
		dict_str = next_line(dict_str);
		i++;
	}
	/* Add dict null terminator */
	dict[i].num = 0;
	dict[i].str = 0;
	return (dict);
}
