/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:45:48 by almlopez          #+#    #+#             */
/*   Updated: 2025/02/23 17:37:10 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#define BUFFER_SIZE 42

char	*get_next_line(int fd)
{
	char		*buffer_temp;
	static char	*buffer_s;
	ssize_t		bytes_read;

	buffer_temp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer_temp)
		return NULL;
	bytes_read = read(fd, buffer_temp, BUFFER_SIZE);
	if (bytes_read == -1 && bytes_read == 0)
		return NULL;
	
}	