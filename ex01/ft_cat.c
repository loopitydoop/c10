/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuwu <shuwu@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 12:51:24 by shuwu             #+#    #+#             */
/*   Updated: 2026/07/17 16:37:32 by shuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// read file contents (could be > 1)
// combine them into one
// output them into the standard output (1 in write)

// char *basename(char *path); gives you the base name of a file
// char *strerror(int errnum); takes an error number and returns the
// 	appropriate error message

// iterate through arguments
// 	for each argument, open the file
//	write out everything in the file? To the standard output?
//	use errno in conjunction with stderror.

// 17 Jul 1647hrs: modularise, make more helper function in separate c files.
// maybe one that generates the inputted statement argv[0], [1], [2], etc for 
// error messages.

#include "ft_cat.h"

void	sk_putstr_fd(int fd, char *str);

int	main(int argc, char **argv)
{
	int	i;
	int	fd;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			sk_putstr_fd(2, );
			sk_putstr_fd(2, strerror(errno));
			sk_putstr_fd(2, "\n");
			return (1);
		}
		i++;
	}
	return (0);
}

void	sk_putstr_fd(int fd, char *str)
{
	while (*str != '\0')
	{
		write(fd, str, 1);
		str++;
	}
}
