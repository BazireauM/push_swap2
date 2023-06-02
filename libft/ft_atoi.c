/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:33:46 by mbazirea          #+#    #+#             */
/*   Updated: 2022/11/05 12:01:41 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *s)
{
	int	i;
	int	mul;
	int	final;

	i = 0;
	mul = 1;
	final = 0;
	while (s[i] != '\0' && (s[i] == '\f' || s[i] == '\r' || s[i] == ' '
			|| s[i] == '\t' || s[i] == '\v' || s[i] == '\n'))
		i++;
	if (s[i] == '-')
	{
		mul = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		final = final * 10 + s[i] - 48;
		i++;
	}
	final *= mul;
	return (final);
}
