/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlim <etlim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:20:37 by ethanlim          #+#    #+#             */
/*   Updated: 2023/08/16 19:35:07 by etlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_list
{
	int				num;
	int				index;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

//libft
long	ft_atoi(char *str);
int		ft_lstsize(t_list *lst);
void	ft_putendl_fd(char *s, int fd);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst);
void	ft_lstdelone(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int num);

//ft_printf
int		ft_strlen(char *s);
int		ft_printf(const char *format, ...);
void	ft_printchar(char c, int *count);
void	ft_printstr(char *s, int *count);
void	ft_printnum(long long int num, char *hex, int *count);
void	ft_printnum_unsigned(unsigned long long int num, char *hex, int *count);

//get_next_line
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);

#endif