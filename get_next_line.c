/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almlopez <almlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:45:48 by almlopez          #+#    #+#             */
/*   Updated: 2025/02/23 12:51:13 by almlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUFFER_SIZE 42

char	*get_next_line(int fd)
{
	char		*buffer_temp;
	static char	*buffer_s;
	int			bytes_read;

	buffer_temp = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer_temp)
		return NULL;

	
	
}