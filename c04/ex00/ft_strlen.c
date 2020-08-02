/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 12:17:20 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/20 12:48:13 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/*
**#include <stdio.h>
**int		main(void)
**{
**	char	string1[] = "thank you";
**	printf("%d", ft_strlen(string1));
**}
*/
