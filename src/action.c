/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 02:18:05 by mbazirea          #+#    #+#             */
/*   Updated: 2023/06/04 02:25:28 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack	*stack)
{
	unsigned int	tmp;

	if (stack->lena >= 2)
	{
		tmp = stack->a[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = tmp;
	}
	write(1, "sa\n", 3);
}
