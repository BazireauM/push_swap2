/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:48:56 by mbazirea          #+#    #+#             */
/*   Updated: 2023/06/03 03:47:53 by mbazirea         ###   ########.fr       */
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

int	test_int(char **big_str_split)
{
	int	i;

	i = 0;
	while (big_str_split[i])
	{
		if (is_int(big_str_split[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

t_stack	*init_stack(char *big_str)
{
	t_stack	*stack;
	int		*a;
	int		len;
	char	**big_str_split;
	int		i;

	i = 0;
	big_str_split = ft_split(big_str, ' ');
	free(big_str);
	while (big_str_split[i])
		i++;
	len = i;
	a = malloc(sizeof(int) * len);
	i = 0;
	if (test_int(big_str_split) == 1)
	{
		write(1, "error\n", 6);
		return (NULL);
	}
	while (big_str_split[i])
	{
		a[i] = ft_atoi(big_str_split[i]);
		i++;
	}
	if (test_duplicate(a, len) == 1)
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	stack = malloc(sizeof(t_stack) * 1);
	stack->a = malloc(sizeof(unsigned int) * len);
	stack->b = malloc(sizeof(unsigned int) * len);
	stack->len = len;
	stack->lena = len;
	stack->lenb = 0;
	i = 0;
	while ((unsigned int)i < stack->lena)
	{
		stack->a[i] = rank(a, i, len);
		i++;
	}
//	free_ft_split(big_str_split);
//	free(a);
//	free(big_str);
	return (stack);
}
