/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:04:56 by mbazirea          #+#    #+#             */
/*   Updated: 2023/06/05 12:34:19 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	algo(t_stack *stack)
{
	unsigned int i;

	i = 0;
	while (!test_sort(stack))
	{
		put_in_b(stack, i);
		put_in_a(stack);
		i++;
	}
	return (test_sort(stack));
}
