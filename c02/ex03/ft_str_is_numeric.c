/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 18:30:22 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/16 18:20:39 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int pos;

	pos = 0;
	if (!(str))
	{
		return (1);
	}
	while (str[pos] != '\0')
	{
		if (!(str[pos] >= '0' && str[pos] <= '9'))
		{
			return (0);
		}
		pos++;
	}
	return (1);
}

/*
** #include <stdio.h>
**int		main(void)
**{
**	printf("%d", ft_str_is_numeric("aabdhwui;YYY"));
**}
*/
