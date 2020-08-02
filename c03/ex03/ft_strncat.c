/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 10:22:22 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/22 18:05:55 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	pos;
	unsigned int	len;

	pos = 0;
	len = 0;
	while (dest[len])
	{
		len++;
	}
	while (src[pos] && pos < nb)
	{
		dest[len] = src[pos];
		len++;
		pos++;
	}
	dest[len] = '\0';
	return (dest);
}

/*
**#include <string.h>
**#include <unistd.h>
**#include <stdio.h>
**int main()
**{
**	char	string1[100] = "Mithras";
**	char	string2[] = "Kuipers";
**	char	string3[100] = "Mithras";
**	char	string4[] = "Kuipers";
**	printf("TEST 1\n");
**	printf("Home-made %s\n", ft_strncat(string1, string2, 1));
**	printf("Built-in %s\n", strncat(string3, string4, 1));
**	printf("\n");
**	char	string5[100] = "Mithras";
**	char	string6[] = "Kuipers";
**	char	string7[100] = "Mithras";
**	char	string8[] = "Kuipers";
**	printf("TEST 2\n");
**	printf("Home-made %s\n", ft_strncat(string5, string6, 10));
**	printf("Built-in %s\n", strncat(string7, string8, 10));
**	return(0);
**}
*/
