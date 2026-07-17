/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sk_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuwu <shuwu@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 16:44:52 by shuwu             #+#    #+#             */
/*   Updated: 2026/07/17 16:45:34 by shuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// prints a string out to the output of your choice
void	sk_putstr_fd(int fd, char *str)
{
	while (*str != '\0')
	{
		write(fd, str, 1);
		str++;
	}
}
