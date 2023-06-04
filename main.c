/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:31:56 by mbazirea          #+#    #+#             */
/*   Updated: 2023/06/04 02:25:26 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack;

	stack = parssing(argc, argv);
	if (stack == NULL)
		return (1);
	int i = 0;
	printf("stack A:\n");
	while (i < stack->lena)
	{
		printf("%d\n", stack->a[i]);
		i++;
	}
	i = 0;
	printf("stack B:\n");
	while (i < stack->lenb)
	{
		printf("%d\n", stack->b[i]);
		i++;
	}
	free_stack(stack);
	return (0);
}
