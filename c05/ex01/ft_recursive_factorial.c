/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 16:47:17 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/23 15:04:02 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int	outcome;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else if (nb > 1)
	{
		outcome = nb;
		return (outcome * ft_recursive_factorial(nb - 1));
	}
	return (0);
}

/*
**#include <stdio.h>
**int		main(void)
**{
**	printf("TEST1: ");
**	printf("%d", ft_recursive_factorial(5));
**	printf("\n");
**	printf("TEST2: ");
**	printf("%d", ft_recursive_factorial(4));
**	printf("\n");
**	printf("TEST3: ");
**	printf("%d", ft_recursive_factorial(6));
**	printf("\n");
**	printf("TEST4: ");
**	printf("%d", ft_recursive_factorial(8));
**}
*/
