/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 18:49:43 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/16 18:41:57 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strlowcase(char *str)
{
	int pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 'A' && str[pos] <= 'Z')
		{
			str[pos] = (str[pos] + 32);
		}
		pos++;
	}
	return (str);
}

/*
** #include <stdio.h>
**
**int		main(void)
**{
**	char string1[] = "oijweoijewIIIIIIISAWWWWW";
**	printf("%s", ft_strlowcase(string1));
**}
*/
