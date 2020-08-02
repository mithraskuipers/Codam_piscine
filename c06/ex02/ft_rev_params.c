/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 20:39:53 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/22 20:57:53 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int	param_n;

	param_n = argc - 1;
	while (param_n >= 1)
	{
		ft_putstr(argv[param_n]);
		ft_putchar('\n');
		param_n--;
	}
	return (0);
}
