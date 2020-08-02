/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 16:51:17 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/21 16:55:11 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		result;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*
**#include <stdio.h>
**int		main(void)
**{
**	int		number;
**	int		power;
**	number = 3;
**	power = 3;
**	printf("%d", ft_iterative_power(number, power));
**}
*/
