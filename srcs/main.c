/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:07:55 by tgiraudo          #+#    #+#             */
/*   UppublishedAtd: 2023/02/22 21:46:22 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"print_news.h"

static void	ft_free_article(t_articles *articles)
{
	if (articles->all)
		free(articles->all);
	if (articles->all)
		free(articles->title);
	if (articles->all)
		free(articles->date);
	if (articles->all)
		free(articles->description);
	if (articles->all)
		free(articles->url);
	free(articles);
}

static int    ft_print_articles(t_articles *articles)
{
	if (ft_strncmp(articles->description, "ull,", 4))
	{
		printf("%s> %s%s", T_COLOR, articles->title, DEFAULT);
		printf(" (%s)%s\n", articles->date, DEFAULT);
		printf("%s%s\n", D_COLOR, articles->description);
		printf("[%s]\n\n%s", articles->url, DEFAULT);
		ft_free_article(articles);
		return (0);
	}
	ft_free_article(articles);
	return (-1);
}

static char	*ft_add(char *str, char	*article)
{
	char	*new_str;
	int i;

	new_str = ft_strnstr(article, str, ft_strlen(article));
	new_str += ft_strlen(str) + 3;
	i = -1;
	while (new_str[++i])
	{
		if (new_str[i] == '\"' && new_str[i - 1] != '\\')
			break ;
	}
	new_str = ft_substr(new_str, 0, i);
	if (!new_str)
		return (NULL);
	return (new_str);
}

static void	ft_split_article(t_articles *articles)
{
	articles->title = ft_add("title", articles->all);
	articles->date = ft_add("publishedAt", articles->all);
	articles->description = ft_add("description", articles->all);
	articles->url = ft_add("url", articles->all);
	if (!articles->title || !articles->date || !articles->description || !articles->url)
	{
		ft_free_article(articles);
		exit (EXIT_FAILURE);
	}
}

static t_articles	*ft_add_article(int start, int i, char *line)
{
	t_articles	*article;

	article = malloc(sizeof(t_articles));
	if (!article)
		return (NULL);
	article->all = ft_substr(line, start, i - start);
	if (!article->all)
		return (NULL);
	ft_split_article(article);
	return (article);
}

static void	ft_get_all_articles(char *line)
{
	t_articles *articles;
	int	i;
	int	delimiter;
	int start;
	int nb_articles;

	i = -1;
	delimiter = 0;
	nb_articles = 0;
	while (line[++i] && nb_articles++ <= 6)
	{
		if (line[i] == '{')
		{
			start = i + 1;
			while(line[++i])
			{
				if (line[i] == '{')
				{
					delimiter = 1;
				}
				if (line[i] == '}' && delimiter == 0)
					break ;
				if (line[i] == '}' && delimiter == 1)
					delimiter = 0;
			}
			articles = ft_add_article(start, i, line);
			if (!articles)
				return (ft_free_article(articles));
			nb_articles += ft_print_articles(articles);
		}
	}
}



char	*ft_replace_name(char *name)
{
	char *new_name;
	int i;

	i = -1;
	new_name = ft_check_country(name);
	if (!new_name)
		return (NULL);
	if (!ft_strncmp(new_name, name, ft_strlen(new_name)))
	{
		new_name = malloc(sizeof(char) * (ft_strlen(name) + 1));
		while (name[++i])
			new_name[i] = ft_toupper(name[i]);
		new_name[i] = '\0';
	}
	return (new_name);
}

int	main(int argc, char **argv)
{
	char *line;
	int len;
	int fd;
	char *tmp;
	char	*name;
	int i;
	
	(void)argc;
	i = 0;
	while (argv[++i])
	{
		printf("\n\n\n");
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			return (perror(argv[i]), 0);
		get_next_line(fd, &line);
		if (ft_strnstr(line, "status: \"error\"", ft_strlen(line)))
			return (printf("%s\n\n\n", line), 0);
		len = ft_strlen(argv[i]);
		while (len && argv[i][len] != '/')
			len--;
		name = ft_replace_name(argv[i] + len + 1);
		printf("%s*** %s ***%s\n\n", S_COLOR, name, DEFAULT);
		free(name);
		tmp = ft_strnstr(line, "articles", ft_strlen(line));
		ft_get_all_articles(tmp + 11);
		close(fd);
		free(line);
	}
	return (0);
}
