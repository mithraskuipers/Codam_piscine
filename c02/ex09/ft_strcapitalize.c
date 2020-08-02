/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   new.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/17 17:01:41 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/17 17:04:51 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		pos;

	pos = 0;
	while (str[pos])
	{
		if (str[pos] >= 'A' && str[pos] <= 'Z')
		{
			str[pos] = str[pos] + 32;
		}
		if ((pos == 0 && str[pos] != ' ') || \
		(str[pos] != ' ' && str[pos - 1] < '0') || \
		(str[pos - 1] > '9' && str[pos - 1] < 'A') || \
		(str[pos - 1] > 'Z' && str[pos - 1] < 'a') || str[pos - 1] > 'z')
		{
			str[pos] = str[pos] - 32;
		}
		pos++;
	}
	return (str);
}
/*
**#include <stdio.h>
**
**int		main(void)
**{
**	char string[] = "hallo+ik b miTHras";
**	printf("%s", ft_strcapitalize(string));
**	return (0);
**}
*/
