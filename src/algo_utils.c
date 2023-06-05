/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:05:48 by mbazirea          #+#    #+#             */
/*   Updated: 2023/06/05 12:34:17 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	test_sort(t_stack *stack)
{
	unsigned int	i;

	i = 1;
	while (i < stack->lena && stack->lenb == 0)
	{
		if (stack->a[i] < stack->a[i - 1])
			return (0);
		i++;
	}
	return (1);
}

void	put_in_b(t_stack *stack, unsigned int i)
{
	unsigned int	b;

	b = 0;

	while (b < stack->len)
	{
		if((stack->a[0] & 1 << i) == 0)
			pb(stack);
		else
			ra(stack);
		b++;
	}
}

void	put_in_a(t_stack *stack)
{
	while (stack->lenb > 0)
	{
		pa(stack);
	}
}
