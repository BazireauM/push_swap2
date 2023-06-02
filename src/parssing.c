/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:46:20 by mbazirea          #+#    #+#             */
/*   Updated: 2023/06/02 04:46:22 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	parssing(int argc, char *argv[])
{
	char *big_str;
/*
	if (argc < 2)
		return (NULL);
*/
	big_str = big_strjoin(argc, argv);

	printf("%s\n", big_str);
	free(big_str);
}
