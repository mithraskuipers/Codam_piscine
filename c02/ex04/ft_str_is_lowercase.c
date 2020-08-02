/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/16 15:21:10 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/16 18:22:15 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int pos;

	pos = 0;
	if (!(str))
	{
		return (1);
	}
	while (str[pos] != '\0')
	{
		if (!(str[pos] >= 'a' && str[pos] <= 'z'))
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
**	printf("%d", ft_str_is_lowercase("aabdhwui;YYY"));
**	printf("%d", ft_str_is_lowercase("aaa"));
**}
*/
