/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:31:56 by mbazirea          #+#    #+#             */
/*   Updated: 2023/06/04 01:21:37 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack;

	stack = parssing(argc, argv);
	if (stack == NULL)
		return (1);
	free_stack(stack);
	return (0);
}
