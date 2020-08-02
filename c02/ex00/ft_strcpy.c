/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/16 13:38:46 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/16 17:56:01 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		pos;

	pos = 0;
	while (src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = src[pos];
	return (dest);
}
/*
** #include <stdio.h>
** int		main(void)
** {
** 	char string1[6] = "Hello";
** 	char string2[8] = "Mithras";
** 	printf("%s", ft_strcpy(string1, string2));
** }
*/
