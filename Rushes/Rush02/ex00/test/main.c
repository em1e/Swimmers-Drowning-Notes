/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:08:03 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/15 18:11:01 by vkettune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#include "dict.h"

t_dict  *make_test_dict(void);
void    find_num(int nb);

int	main(int argc, char **argv)
{
	unsigned int	nb;
	int				fd;
	char			*dict_str;
	t_dict			*dict;

	/* TODO check that nb is correct unsigned int */
	/* If only one argument given (nb), open 'numbers.dict' */
	if (argc == 2)
	{
		nb = atoi(argv[1]); /* TODO add own atoi funciton */
		fd = open("numbers.dict", O_RDONLY);
	}
	/* If two arguments given (dict nb), open given dict file */
	else if (argc == 3)
	{
		nb = atoi(argv[2]);
		fd = open(argv[1], O_RDONLY);
	}
	/* All other number of arguments is invalid */
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
	/* Handle error from opening the dict file */
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	/* Allocate memory to 'dict_str' and read file contents into it */
	dict_str = malloc(1000);
	if (dict_str == 0)
		return (0);
	read(fd, dict_str, 1000);
	/* Make actual dictionary of type t_dict */
	dict = make_test_dict();
	find_num(dict, nb);
	/* Free allocated memory */
	free(dict);
	free(dict_str);
	close(fd);
	return (0);
}
