/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:28:34 by rkrechun          #+#    #+#             */
/*   Updated: 2023/11/22 16:13:09 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>//for malloc and free functions
# include <unistd.h>//for file I/O (read, write, open, close,)

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

// PRINCIPALES 
char	*get_next_line(int fd);

// UTILS
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strchr(char *s, int c);

#endif