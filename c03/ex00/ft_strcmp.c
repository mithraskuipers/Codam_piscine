/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/17 17:39:24 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/22 11:54:08 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	if (!s1 || !s2)
		return (0);
	while ((*s1 == *s2) && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
**#include <string.h>
**#include <stdio.h>
**int		main(void)
**{
**	char string1[] = "Mithras";
**	char string2[] = "Kuipers";
**	char string3[] = "Mithras";
**	char string4[] = "";
**	printf("TEST1 \n");
**	printf("Home-made %d \n", ft_strcmp(string1, string2));
**	printf("Built-in %d \n", strcmp(string1, string2));
**	printf("\n");
**	printf("TEST2\n");
**	printf("Home-made %d\n", strcmp(string1, string3));
**	printf("Built-in %d\n", ft_strcmp(string1, string3));
**	printf("\n");
**	printf("TEST3\n");
**	printf("Home-made %d\n", strcmp(string4, string4));
**	printf("Built-in %d", ft_strcmp(string4, string4));
**	return (0);
**}
*/
