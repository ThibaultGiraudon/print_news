/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_news.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:20:39 by tgiraudo          #+#    #+#             */
/*   UppublishedAtd: 2023/02/22 21:46:22 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef print_news_H
# define print_news_H

# include<stdio.h>
# include "../libft/headers/libft.h"
# include "../libft/headers/ft_printf_fd.h"
# include "../libft/headers/get_next_line.h"

typedef struct s_articles
{
	char    *all;
    char    *title;
    char    *date;
    char    *description;
    char    *url;
}	t_articles;

char	*ft_check_country(char *name);

#endif