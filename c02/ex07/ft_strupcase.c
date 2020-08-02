/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 18:49:43 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/16 18:39:48 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strupcase(char *str)
{
	int pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 'a' && str[pos] <= 'z')
		{
			str[pos] -= 32;
		}
		pos++;
	}
	return (str);
}
/*
** #include <stdio.h>
**
** int		main(void)
** {
**	//char *string1 = "abcd";
**	char string1[] = "abcd";
**	printf("%s", ft_strupcase(string1));
**
**	//printf("%s", string1);
**	return (0);
**}
*/
