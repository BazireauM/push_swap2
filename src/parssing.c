/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:46:20 by mbazirea          #+#    #+#             */
/*   Updated: 2023/06/03 02:27:10 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*parssing(int argc, char *argv[])
{
	char	*big_str;
	t_stack	*stack;

	if (argc < 2)
		return (NULL);
	big_str = big_strjoin(argc, argv);
	if (big_str == NULL)
		write(1, "error\n", 6);
	if (test_input_valid(big_str) == 1)
	{
		write(1, "error\n", 6);
		free(big_str);
	}
	stack = init_stack(big_str);
	printf("big_str : %s\n", big_str);
	printf("len : %d\n", stack->len);
	int i = 0;
	while (i < stack->len)
	{
		printf("%d\n", stack->a[i]);
		i++;
	}
	free_stack(stack);
	return (stack);
}
