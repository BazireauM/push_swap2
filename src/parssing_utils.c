/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:48:56 by mbazirea          #+#    #+#             */
/*   Updated: 2023/06/03 02:27:08 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	test_input_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != '-' && str[i] != ' ')
			return (1);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
		{
			if (str[i - 1] != ' ' || !ft_isdigit(str[i + 1]))
				return (1);
		}
		i++;
	}
	return (0);
}

char	*big_strjoin(int argc, char *argv[])
{
	char	*big_str;
	int		i;

	i = 1;
	big_str = malloc(sizeof(char) * 2);
	if (big_str == NULL)
		return (NULL);
	big_str[0] = ' ';
	big_str[1] = '\0';
	while (i < argc)
	{
		big_str = big_strjoin2(big_str, i, argv);
		if (big_str == NULL)
			return (NULL);
		i++;
	}
	return (big_str);
}

char	*big_strjoin2(char *big_str, int i, char *argv[])
{
	char	*big_str2;

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
	return (big_str);
}

t_stack	*init_stack(char *big_str)
{
	t_stack	*stack;
	char	**big_str_split;
	int		i;

	stack = malloc(sizeof(t_stack) * 1);
	i = 0;
	big_str_split = ft_split(big_str, ' ');
	free(big_str);
	while (big_str_split[i])
		i++;
	stack->len = i;
	stack->lena = i;
	stack->lenb = 0;
	stack->a = malloc(sizeof(int) * stack->len);
	stack->b = malloc(sizeof(int) * stack->len);

	i = 0;
	while (big_str_split[i])
	{
		stack->a[i] = ft_atoi(big_str_split[i]);
		i++;
	}
	free_ft_split(big_str_split);
	return (stack);
}
