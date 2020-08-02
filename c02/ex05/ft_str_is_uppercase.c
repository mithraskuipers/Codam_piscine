/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 18:49:43 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/16 18:23:24 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int pos;

	pos = 0;
	if (!(str))
	{
		return (1);
	}
	while (str[pos] != '\0')
	{
		if (!(str[pos] >= 'A' && str[pos] <= 'Z'))
		{
			return (0);
		}
		pos++;
	}
	return (1);
}

/*
** #include <stdio.h>
** int		main(void)
** {
**	printf("%d", ft_str_is_uppercase("aabdhwui;YYY"));
**	printf("%d", ft_str_is_uppercase("AAA"));
**}
*/
