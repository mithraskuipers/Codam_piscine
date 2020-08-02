/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 16:40:15 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/21 16:45:37 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		outcome;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	outcome = 1;
	while (nb > 1)
	{
		outcome = outcome * nb;
		nb--;
	}
	return (outcome);
}
/*
**#include <stdio.h>
**
**int		main(void)
**{
**	int		number;
**
**	number = 10;
**	printf("%d", ft_iterative_factorial(number));
**}
*/
