/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 16:57:10 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/21 16:59:16 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
**#include <stdio.h>
**int		main(void)
**{
**	int		number;
**	int		power;
**	number = 3;
**	power = 3;
**	printf("%d", ft_recursive_power(number, power));
**}
*/
