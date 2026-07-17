/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuwu <shuwu@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 11:10:27 by shuwu             #+#    #+#             */
/*   Updated: 2026/07/16 14:48:42 by shuwu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h> // for open() flag definitions
#include <sys/stat.h> // for open() file permission macros?
#include <unistd.h>

// displays the CONTENT of the file given as a argument
// e.g. ./ft_display_file <filename> would display the contents of <filename>
// try man -s3 open to figure out how to open files.
// open(pathname, flag)
// basic flags include O_RDONLY, O_WRONLY, O_RDWR
// 	additional flags can be added with the bitwise OR operator | 
//	O_CREAT: create file if it doesn't alr exist (if it alr exists,
//		it will just open a file
//	O_TRUNC: truncate the file length to 0 bytes if it alr exists
//	O_APPEND: force write operations to append to the end of the file
//	O_EXCL: use with O_CREAT to fail the operation if the file alr exists
//	additional octal args  exist if you wanna use O_CREAT, they are 
// 		regarding file permissions.
//	open returns -1 on failure, otherwise returns a "file descriptor"
//		which is like a index number in the kernel's process for a
//		specific file
//	read() returns the number of bytes successfully read.

int	sk_strlen(char *str);

int	main(int argc, char **argv)
{
	int	fd;
	char	buf[1];	

	if (argc < 2)
		return(write(2, "File name missing.",
			sk_strlen("File name missing.")));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (1);
	while(read(fd, buf, 1) > 0)
		write(1, buf, 1);
	close(fd);
	return (0);
}

int	sk_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
