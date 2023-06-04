/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 03:34:51 by mbazirea          #+#    #+#             */
/*   Updated: 2023/06/04 02:25:30 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	unsigned int	*a;
	unsigned int	*b;
	unsigned int	lena;
	unsigned int	lenb;
	unsigned int	len;
}	t_stack;

//	parssing.c

t_stack			*parssing(int argc, char *argv[]);

//	parssing_utils.c (full)

int				test_input_valid(char *str);
char			*big_strjoin(int argc, char *argv[]);
char			*big_strjoin2(char *big_str, int i, char *argv[]);
unsigned int	rank(int *a, int i, int len);
int				test_int(char **big_str_split);

//	utils.c (full)

void			free_stack(t_stack *stack);
void			free_ft_split(char **str);
long long		ft_atoi_long_long(const char *s);
int				is_int(char *nb);
int				test_duplicate(int *a, int len);

//	inti_stack.c

t_stack			*init_stack(char *big_str);
t_stack			*init_stack2(char **big_str_split, int len);
t_stack			*init_stack3(int *a, int len);
t_stack			*init_stack4(t_stack *stack, int *a, int len);

//	action.c

void			sa(t_stack *stack);

#endif
