/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achahrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:14:18 by achahrou          #+#    #+#             */
/*   Updated: 2024/01/19 15:14:20 by achahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "get_next_line.h"

typedef struct s_pipex
{
	char	**cmd;
	int		fd[2];
	pid_t	pid;
	int		fd1;
	int		fd2;
	char	*path;
	char	*spath;
	int		cmd_nums;
	int		i;
	int		fd_hd;
	char	*line;
	char	*infile;
	char	**pathh;
	char	*env_path;
	char	*potential_path;
	int		j;
}	t_data;

/* split Functions */
int		count_strings(char const *s, char c);
char	*malloc_strings(const char *s, char c);
char	**ft_split(char const *s, char c);

/* utils Function and if you need any 
 * explaination you can read it file itself */
void	exiti(char *s);
char	*str_concat(char *s1, char *s2);
int		ft_strlen(char *s);

/* Check Path Envirenment char **path */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/* Free T */
void	freex(t_data *pipex);

/* herd_doc */
void	handle_heredoc(t_data *pipex, char *limiter);
void	check_heredoc(t_data *pipex, char **av, int ac);
int		ft_strcmp(char *s1, char *s2);
/* open and read files f1 and f2 */
void	openf_check(t_data *pipex, char *f1, char *f2);
#endif // PIPEX_H
