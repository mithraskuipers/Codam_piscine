/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 12:23:55 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/20 12:59:02 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
** Retry 2.
** Notes:
** Perhaps Moulinette tests for minimum int size.
** Update:
** Implemented int overflow prevention for exceeding min int size by 1.
*/

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		write(1, "147483648", 9);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb < 10)
	{
		digit = nb + '0';
		write(1, &digit, 1);
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
