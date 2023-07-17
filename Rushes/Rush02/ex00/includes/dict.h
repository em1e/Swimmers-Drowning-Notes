/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:36:12 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/16 14:11:19 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

struct s_dict	*make_dict(char *dict_str);
int				dict_size(char *str);
int				dict_contains_all(struct s_dict *dict);

typedef struct s_dict
{
	int		num;
	char	*str;
}				t_dict;

#endif
