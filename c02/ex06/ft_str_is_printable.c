/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 18:59:07 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/16 16:42:27 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int pos;

	pos = 0;
	if (!(str))
	{
		return (1);
	}
	while (str[pos] != '\0')
	{
		if (!((str[pos] >= 32 && str[pos] <= 127)))
		{
			return (0);
		}
		pos++;
	}
	return (1);
}
