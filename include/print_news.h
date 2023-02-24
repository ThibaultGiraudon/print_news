/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_news.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:20:39 by tgiraudo          #+#    #+#             */
/*   Updated: 2023/02/24 18:46:29 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_NEWS_H
# define PRINT_NEWS_H

# include <stdio.h>
# include "../libft/headers/libft.h"
# include "../libft/headers/ft_printf_fd.h"
# include "../libft/headers/get_next_line.h"

# define S_COLOR "\033[38;5;202m"
# define T_COLOR "\033[38;5;36m"
# define D_COLOR "\033[38;5;15m"
# define DEFAULT "\e[0m"

# define NB_ARTICLES 4

typedef struct s_articles
{
	char	*all;
	char	*title;
	char	*date;
	char	*description;
	char	*url;
}	t_articles;

char	*ft_check_country(char *name);

#endif