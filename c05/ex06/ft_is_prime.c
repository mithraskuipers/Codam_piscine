/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 17:09:45 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/21 17:12:45 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		div;

	if (nb <= 1)
	{
		return (0);
	}
	div = nb / 2;
	while (nb % div != 0 || div == 1)
	{
		if (div == 1)
		{
			return (1);
		}
		div--;
	}
	return (0);
}
/*
**#include <stdio.h>
**int		main(void)
**{
**	int		number;
**	number = 7;
**	printf("%d", ft_is_prime(number));
**}
*/
