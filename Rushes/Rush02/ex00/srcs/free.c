/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:00:03 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/15 19:30:57 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <stdlib.h>

void	free_all(t_dict *dict)
{
	int i;

	i = 0;
	while(dict[i].num != -1 && dict[i].str != 0)
	{
		free(dict[i].str);
		i++;
	}
	free(dict);
}
