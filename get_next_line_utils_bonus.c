/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:48:01 by gimartin          #+#    #+#             */
/*   Updated: 2022/01/20 02:51:51 by gimartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
/*
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
}*/

size_t	ft_strlen(char *str)
{
	size_t	c;

	c = 0;
	if (!str)
		return (0);
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	c;
	char	*str;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = -1;
	c = 0;
	if (s1)
		while (s1[++i] != '\0')
			str[i] = s1[i];
	while (s2[c] != '\0')
		str[i++] = s2[c++];
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (str);
}
