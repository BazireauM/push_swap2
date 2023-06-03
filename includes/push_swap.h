/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:34:51 by mbazirea          #+#    #+#             */
/*   Updated: 2023/06/03 02:27:12 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	lena;
	int	lenb;
	int	len;
}	t_stack;

//	parssing.c

t_stack	*parssing(int argc, char *argv[]);

//	parssing_utils.c

int		test_input_valid(char *str);
char	*big_strjoin(int argc, char *argv[]);
char	*big_strjoin2(char *big_str, int i, char *argv[]);
t_stack	*init_stack(char *big_str);

//	utils.c

void	free_stack(t_stack *stack);
void	free_ft_split(char **str);

#endif
