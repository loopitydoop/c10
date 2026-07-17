/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuwu <shuwu@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 12:56:23 by shuwu             #+#    #+#             */
/*   Updated: 2026/07/17 14:02:54 by shuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// header file for ft_cat.c

#include <errno.h> // for errno variable
#include <fcntl.h> // for open() oflags
#include <libgen.h> // for basename
#include <string.h> // for strerror()
#include <sys/stat.h> // for open()
#include <unistd.h> // for read() and write()

void	sk_putstr_fd(int fd, char *str);
