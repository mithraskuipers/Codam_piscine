/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 10:21:15 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/20 10:45:36 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int pos1;
	int pos2;

	pos1 = 0;
	pos2 = 0;
	while (dest[pos1] != '\0')
	{
		pos1++;
	}
	while (src[pos2] != '\0')
	{
		dest[pos1] = src[pos2];
		pos1++;
		pos2++;
	}
	dest[pos1] = '\0';
	return (dest);
}

/*
** Appends a copy of the string pointed to by s2 to the end of the string
** pointed to by s1. It returns a pointer to s1 where the resulting
** concatenated string resides.
*/
