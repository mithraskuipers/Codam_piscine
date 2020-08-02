/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/16 18:54:12 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/16 18:54:15 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int pos;

	pos = 0;
	while ((pos < n) && src[pos] != '\0')
	{
		dest[pos] = src[pos];
		pos++;
	}
	while (pos < n)
	{
		dest[pos] = '\0';
		pos++;
	}
	return (dest);
}
/*
** #include <stdio.h>
** int		main(void)
** {
**	char string1[6] = "Hello";
**	char string2[8] = "Mithras";
**	printf("%s", ft_strncpy(string1, string2, 5));
**}
*/
