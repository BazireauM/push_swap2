/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:31:56 by mbazirea          #+#    #+#             */
/*   Updated: 2023/06/05 12:33:41 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	display_stack(t_stack *stack);

int	main(int argc, char *argv[])
{
	t_stack	*stack;

	stack = parssing(argc, argv);
	if (stack == NULL)
		return (1);
	printf("%d\n", algo(stack));
	display_stack(stack);
	free_stack(stack);
	return (0);
}

void	display_stack(t_stack *stack)
{
	unsigned int	i;

	i = 0;
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
}
