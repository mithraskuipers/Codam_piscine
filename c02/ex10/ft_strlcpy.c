/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/15 15:39:03 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/16 16:57:06 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int pos;
	unsigned int len;

	pos = 0;
	len = 0;
	while (src[pos] != '\0')
	{
		if (size && (pos < (size - 1)))
		{
			dest[pos] = src[pos];
			len++;
		}
		pos++;
	}
	dest[len] = '\0';
	return (pos);
}
/*
** #include <stdio.h>
** int	main(void)
** {
** 	unsigned int size = 4;
** 	char string1[6] = "Hello";
** 	char string2[8] = "Mithras";
** 	printf("%d", ft_strlcpy(string1, string2, size));
** }
*/
/*
** strlcpy returns the length of src.
*/
