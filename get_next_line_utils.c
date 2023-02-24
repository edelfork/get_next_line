/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:51:42 by gimartin          #+#    #+#             */
/*   Updated: 2022/01/19 22:58:24 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	c;

	c = 0;
	if (!str)
		return (0);
	while (str[c])
		c++;
	return (c);
}

char	*ft_strchr(char *save, char c)
{
	int	i;

	i = 0;
	if (!save)
		return (NULL);
	if (!c)
		return (&save[ft_strlen(save)]);
	while (save[i])
	{
		if (save[i] == c)
			return (&save[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *save, char *buff)
{
	size_t	i;
	size_t	c;
	char	*str;

	i = -1;
	c = 0;
	if (!save)
	{
		save = malloc(sizeof(char));
		save[0] = '\0';
	}
	if (!save || !buff)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(save) + ft_strlen(buff) + 1));
	if (!str)
		return (NULL);
	if (save)
		while (save[++i])
			str[i] = save[i];
	while (buff[c])
		str[i++] = buff[c++];
	str[ft_strlen(save) + ft_strlen(buff)] = '\0';
	free(save);
	return (str);
}
