/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 15:30:56 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/16 18:18:52 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int pos;

	pos = 0;
	if (!(str))
	{
		return (1);
	}
	while (str[pos] != '\0')
	{
		if (!((str[pos] >= 'a' && str[pos] <= 'z') || \
		(str[pos] >= 'A' && str[pos] <= 'Z')))
		{
			return (0);
		}
		pos++;
	}
	return (1);
}

/*
** #include <stdio.h>
**
**int		main(void)
**{
**	printf("%d", ft_str_is_alpha("aabdhwui;YYY"));
**	//printf("%d", ft_str_is_alpha("\n"));
**	printf("%d", ft_str_is_alpha("hahatestditisalpha"));
**}
*/
