/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 10:07:36 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/22 16:51:42 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	pos;

	pos = 0;
	while (((s1[pos] != '\0' || s2[pos] != '\0')) && pos < n)
	{
		if (s1[pos] != s2[pos])
			return (s1[pos] - s2[pos]);
		pos++;
	}
	if (pos == n)
		return (0);
	if (s1[pos] == '\0' && s2[pos] == '\0')
		return (0);
	else
		return (s1[pos] - s1[pos]);
}

/*
**#include <stdio.h>
**int		main(void)
**{
**	char	string1[] = "Mithras";
**	char	string2[] = "";
**	printf("TEST 1\n");
**	printf("home-made %d \n", ft_strncmp(string1, string2, 3));
**	printf("built-in %d \n\n", strncmp(string1, string2, 3));
**	printf("TEST 2\n");
**	printf("home-made %d \n", ft_strncmp(string1, string2, 4));
**	printf("built-in %d \n\n", strncmp(string1, string2, 4));
**	printf("TEST 3\n");
**	printf("home-made %d \n", ft_strncmp(string1, string2, 5));
**	printf("built-in %d \n\n", strncmp(string1, string2, 5));
**	printf("TEST 4\n");
**	printf("home-made %d \n", ft_strncmp(string1, string2, 11));
**	printf("built-in %d \n\n", strncmp(string1, string2, 11));
**}
*/
