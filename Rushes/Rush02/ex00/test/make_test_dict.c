/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_test_dict.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpatsi <hpatsi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:25:18 by hpatsi            #+#    #+#             */
/*   Updated: 2023/07/15 13:43:32 by hpatsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dict.h"

t_dict	*make_test_dict(void)
{
	t_dict	*test_dict;

	test_dict = malloc(33 * sizeof(t_dict));
	test_dict[0].num = 0;
	test_dict[0].str = "zero";
	test_dict[1].num = 1;
	test_dict[1].str = "one";
	test_dict[2].num = 2;
	test_dict[2].str = "two";
	test_dict[3].num = 3;
	test_dict[3].str = "three";
	test_dict[4].num = 4;
	test_dict[4].str = "four";
	test_dict[5].num = 5;
	test_dict[5].str = "five";
	test_dict[6].num = 6;
	test_dict[6].str = "six";
	test_dict[7].num = 7;
	test_dict[7].str = "seven";
	test_dict[8].num = 8;
	test_dict[8].str = "eight";
	test_dict[9].num = 9;
	test_dict[9].str = "nine";
	test_dict[10].num = 10;
	test_dict[10].str = "ten";
	test_dict[11].num = 11;
	test_dict[11].str = "eleven";
	test_dict[12].num = 12;
	test_dict[12].str = "twelve";
	test_dict[13].num = 13;
	test_dict[13].str = "thirteen";
	test_dict[14].num = 14;
	test_dict[14].str = "fourteen";
	test_dict[15].num = 15;
	test_dict[15].str = "fifteen";
	test_dict[16].num = 16;
	test_dict[16].str = "sixteen";
	test_dict[17].num = 17;
	test_dict[17].str = "seventeen";
	test_dict[18].num = 18;
	test_dict[18].str = "eighteen";
	test_dict[19].num = 19;
	test_dict[19].str = "nineteen";
	test_dict[20].num = 20;
	test_dict[20].str = "twenty";
	test_dict[21].num = 30;
	test_dict[21].str = "thirty";
	test_dict[22].num = 40;
	test_dict[22].str = "forty";
	test_dict[23].num = 50;
	test_dict[23].str = "fifty";
	test_dict[24].num = 60;
	test_dict[24].str = "sixty";
	test_dict[25].num = 70;
	test_dict[25].str = "seventy";
	test_dict[26].num = 80;
	test_dict[26].str = "eighty";
	test_dict[27].num = 90;
	test_dict[27].str = "ninety";
	test_dict[28].num = 100;
	test_dict[28].str = "hundred";
	test_dict[29].num = 1000;
    test_dict[29].str = "thousand";
	test_dict[30].num = 1000000;
    test_dict[30].str = "million";
	test_dict[31].num = 1000000000;
    test_dict[31].str = "billion";
	test_dict[32].num = -1;
    test_dict[32].str = 0;

	return (test_dict);
}
