/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 03:29:31 by mbazirea          #+#    #+#             */
/*   Updated: 2023/06/03 03:46:02 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

unsigned int	rank(int *a, int i, int len)
{
	int	count;
	int	b;

	count = len - 1;
	b = 0;
	while (b < len)
	{
		if (a[i] < a[b])
			count--;
		b++;
	}
	return (count);
}
