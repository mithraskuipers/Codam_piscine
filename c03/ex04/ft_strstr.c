/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 10:23:21 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/20 12:09:18 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int pos;
	int to_find_index;
	int match_pos;

	pos = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[pos] != '\0')
	{
		to_find_index = 0;
		if (str[pos] == to_find[to_find_index])
		{
			match_pos = pos;
			while (str[pos] == to_find[to_find_index])
			{
				if (to_find[to_find_index + 1] == '\0')
					return (&str[match_pos]);
				to_find_index++;
				pos++;
			}
			pos = match_pos;
		}
		pos++;
	}
	return (0);
}

/*
** The strstr() function searches the given string in the specified main string
** and returns the pointer to the first occurrence of the given string.
*/

/*
**#include <stdio.h>
**
**int		main(void)
**{
**	char string1[] = "Mithras Kuipers";
**	char string2[] = "Kuipers";
**	printf("%s", ft_strstr(string1, string2));
**}
*/
