/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:48:56 by mbazirea          #+#    #+#             */
/*   Updated: 2023/06/02 04:50:07 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	test_input_valid(char *str)
{
	return (0);
	str[0] = '\0';
}

char *big_strjoin(int argc, char *argv[])
{
	char *big_str;
	char *big_str2;
	int i;

	i = 1;
	big_str = malloc(sizeof(char) * 2);
	if (big_str == NULL)
		return (NULL);
	big_str[0] = ' ';
	big_str[1] = '\0';
	while (i < argc)
	{
		big_str2 = ft_strjoin(big_str, " ");
		if (big_str2 == NULL)
		{
			free(big_str);
			return (NULL);
		}
		free(big_str);
		big_str = big_str2;
		big_str2 = ft_strjoin(big_str, argv[i]);
		if (big_str2 == NULL)
		{
			free(big_str);
			return (NULL);
		}
		free(big_str);
		big_str = big_str2;
		i++;
	}
	return (big_str);
}
