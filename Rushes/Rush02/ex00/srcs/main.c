/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:08:03 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/16 15:16:08 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include "dict.h"
#include "ft.h"
#include "free.h"
#include "logic.h"

int	compare_to_max(char *nbstr)
{
	char	*max;
	int		i;

	max = "4294967295";
	i = 0;
	while (nbstr[i] != 0)
	{
		if (nbstr[i] > max[i])
		{
			ft_putstr("Error\n");
			return (0);
		}
		if (nbstr[i] < max[i])
			return (1);
		i++;
	}
	return (1);
}

int	check_nb(char *nbstr)
{
	int		i;

	i = 0;
	while (nbstr[i] != 0)
	{
		if (nbstr[i] < '0' || nbstr[i] > '9')
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	if (i > 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (i == 10)
	{	
		if (compare_to_max(nbstr) == 0)
			return (0);
	}
	return (1);
}

int	handle_arguments(int argc, char **argv, char **strptr, int *fptr)
{
	if (argc == 2)
	{
		*strptr = argv[1];
		*fptr = open("numbers.dict", O_RDONLY);
	}
	else if (argc == 3)
	{
		*strptr = argv[2];
		*fptr = open(argv[1], O_RDONLY);
	}
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (*fptr == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	return (1);
}

char	*read_dict(int f)
{
	char	*dict_str;

	dict_str = malloc(1000);
	if (dict_str == 0)
	{
		close(f);
		ft_putstr("Dict Error\n");
		return (0);
	}
	read(f, dict_str, 1000);
	close(f);
	return (dict_str);
}

int	main(int argc, char **argv)
{
	char			*nbstr;
	unsigned int	nb;
	int				f;
	char			*dict_str;
	t_dict			*dict;

	if (handle_arguments(argc, argv, &nbstr, &f) == 0)
		return (0);
	if (check_nb(nbstr) == 0)
		return (0);
	nb = ft_atoui(nbstr);
	dict_str = read_dict(f);
	if (dict_str == 0)
		return (0);
	dict = make_dict(dict_str);
	free(dict_str);
	if (dict == 0)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	find_num(dict, nb);
	free_all(dict);
	return (0);
}
