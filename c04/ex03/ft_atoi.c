/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/20 12:35:17 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/20 12:59:34 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		iter;
	int		sign;
	int		number;

	iter = 0;
	number = 0;
	sign = 1;
	while (str[iter] == ' ' || str[iter] == '+' || str[iter] == '\t' || \
	str[iter] == '\v' || str[iter] == '\r' || str[iter] == '\n' || \
	str[iter] == '\f')
		iter++;
	if (str[iter] == '-')
	{
		iter++;
		sign = -1;
	}
	if (str[iter] == '-' || str[iter] == '+')
		iter++;
	while (str[iter] >= '0' && str[iter] <= '9')
	{
		number = (number * 10) + (str[iter] - '0');
		iter++;
	}
	return (number * sign);
}
