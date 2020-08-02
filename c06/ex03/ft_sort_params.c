/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 20:41:33 by mikuiper      #+#    #+#                 */
/*   Updated: 2020/07/22 21:01:27 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_arguments(char **argv)
{
	int	pos2;
	int	pos1;

	pos1 = 1;
	while (argv[pos1])
	{
		pos2 = 0;
		while (argv[pos1][pos2])
		{
			ft_putchar(argv[pos1][pos2]);
			pos2++;
		}
		ft_putchar('\n');
		pos1++;
	}
}

int		ft_strcmp(char *a, char *b)
{
	int	pos;

	pos = 0;
	while (a[pos] != '\0' && b[pos] != '\0' && a[pos] == b[pos])
	{
		pos++;
	}
	return (a[pos] - b[pos]);
}

/*
**If ft_strcmp() returns zero, it means both strings are identical,
**meaning there is nothing to sort. If it returns another value, both
**are not identical, meaning we can sort them.  If the value is greater
**than zero, it means that the second string is greater than the first
**string. We thus swap position of the next argument, with the position of
**the current argument.
*/

void	ft_sort_params(int argc, char **argv)
{
	char	*temp;
	int		pos;

	pos = 1;
	while (pos < argc - 1)
	{
		if (ft_strcmp(argv[pos], argv[pos + 1]) > 0)
		{
			temp = argv[pos];
			argv[pos] = argv[pos + 1];
			argv[pos + 1] = temp;
			pos = 0;
		}
		pos++;
	}
	print_arguments(argv);
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_params(argc, argv);
	}
	return (0);
}
