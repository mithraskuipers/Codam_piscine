/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 11:20:00 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/13 13:28:04 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	pos;

	while (str[pos])
	{
		write(1, &str[pos], 1);
		pos++;
	}
}
