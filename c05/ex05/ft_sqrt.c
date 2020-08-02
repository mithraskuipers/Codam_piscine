/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 17:04:26 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/21 17:09:07 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		repeat;

	repeat = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (repeat < 46342)
	{
		if ((repeat * repeat) == nb)
		{
			return (repeat);
		}
		repeat++;
	}
	return (0);
}
/*
**#include <stdio.h>
**int		main(void)
**{
**	int		number;
**	number = 4;
**	printf("%d", ft_sqrt(number));
**}
*/
