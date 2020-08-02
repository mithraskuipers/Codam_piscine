/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 12:19:03 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/20 12:48:29 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		write(1, &str[pos], 1);
		pos++;
	}
}
/*
**int	main(void)
**{
**	char	string1[] = "What a beautiful day";
**	ft_putstr(string1);
**}
*/
