/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_country.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:43:17 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/02/23 15:44:15 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_news.h"

char	*ft_check_country(char *name)
{
	if(!ft_strncmp(name, "ae", ft_strlen(name)))
		return (ft_strdup("UNITED-ARAB-EMIRATES"));
	if(!ft_strncmp(name, "ar", ft_strlen(name)))
		return (ft_strdup("ARGENTINA"));
	if(!ft_strncmp(name, "at", ft_strlen(name)))
		return (ft_strdup("AUSTRIA"));
	if(!ft_strncmp(name, "au", ft_strlen(name)))
		return (ft_strdup("AUSTRALIA"));
	if(!ft_strncmp(name, "be", ft_strlen(name)))
		return (ft_strdup("BELGIUM"));
	if(!ft_strncmp(name, "bg", ft_strlen(name)))
		return (ft_strdup("BULGARIA"));
	if(!ft_strncmp(name, "br", ft_strlen(name)))
		return (ft_strdup("FRANCE"));
	if(!ft_strncmp(name, "ca", ft_strlen(name)))
		return (ft_strdup("CANADA"));
	if(!ft_strncmp(name, "ch", ft_strlen(name)))
		return (ft_strdup("SWITZERLAND"));
	if(!ft_strncmp(name, "cn", ft_strlen(name)))
		return (ft_strdup("CHINA"));
	if(!ft_strncmp(name, "co", ft_strlen(name)))
		return (ft_strdup("COLOMBIA"));
	if(!ft_strncmp(name, "cu", ft_strlen(name)))
		return (ft_strdup("CUBA"));
	if(!ft_strncmp(name, "cz", ft_strlen(name)))
		return (ft_strdup("CZECH-REPUBLIC"));
	if(!ft_strncmp(name, "de", ft_strlen(name)))
		return (ft_strdup("GERMANY"));
	if(!ft_strncmp(name, "eg", ft_strlen(name)))
		return (ft_strdup("EGYPT"));
	if(!ft_strncmp(name, "fr", ft_strlen(name)))
		return (ft_strdup("FRANCE"));
	if(!ft_strncmp(name, "gb", ft_strlen(name)))
		return (ft_strdup("UNITED-KINGDOM"));
	if(!ft_strncmp(name, "gr", ft_strlen(name)))
		return (ft_strdup("GREECE"));
	if(!ft_strncmp(name, "hk", ft_strlen(name)))
		return (ft_strdup("HONG_KONG"));
	if(!ft_strncmp(name, "hu", ft_strlen(name)))
		return (ft_strdup("HUNGARY"));
	if(!ft_strncmp(name, "id", ft_strlen(name)))
		return (ft_strdup("IDONESIA"));
	if(!ft_strncmp(name, "ie", ft_strlen(name)))
		return (ft_strdup("IRELAND"));
	if(!ft_strncmp(name, "il", ft_strlen(name)))
		return (ft_strdup("ISRAEL"));
	if(!ft_strncmp(name, "in", ft_strlen(name)))
		return (ft_strdup("INDIA"));
	if(!ft_strncmp(name, "it", ft_strlen(name)))
		return (ft_strdup("ITALY"));
	if(!ft_strncmp(name, "jp", ft_strlen(name)))
		return (ft_strdup("JAPAN"));
	if(!ft_strncmp(name, "kr", ft_strlen(name)))
		return (ft_strdup("KOREA"));
	if(!ft_strncmp(name, "lt", ft_strlen(name)))
		return (ft_strdup("LITHUANIA"));
	if(!ft_strncmp(name, "lv", ft_strlen(name)))
		return (ft_strdup("LATVIA"));
	if(!ft_strncmp(name, "ma", ft_strlen(name)))
		return (ft_strdup("MOROCCO"));
	if(!ft_strncmp(name, "mx", ft_strlen(name)))
		return (ft_strdup("MEXICO"));
	if(!ft_strncmp(name, "my", ft_strlen(name)))
		return (ft_strdup("MALASIA"));
	if(!ft_strncmp(name, "ng", ft_strlen(name)))
		return (ft_strdup("NIGERIA"));
	if(!ft_strncmp(name, "nl", ft_strlen(name)))
		return (ft_strdup("NETHERLANDS"));
	if(!ft_strncmp(name, "no", ft_strlen(name)))
		return (ft_strdup("NORWAY"));
	if(!ft_strncmp(name, "nz", ft_strlen(name)))
		return (ft_strdup("NEW_ZEALAND"));
	if(!ft_strncmp(name, "ph", ft_strlen(name)))
		return (ft_strdup("PHILIPINES"));
	if(!ft_strncmp(name, "pl", ft_strlen(name)))
		return (ft_strdup("POLAND"));
	if(!ft_strncmp(name, "pt", ft_strlen(name)))
		return (ft_strdup("PORTUGAL"));
	if(!ft_strncmp(name, "ro", ft_strlen(name)))
		return (ft_strdup("ROMANIA"));
	if(!ft_strncmp(name, "rs", ft_strlen(name)))
		return (ft_strdup("FRANCE"));
	if(!ft_strncmp(name, "ru", ft_strlen(name)))
		return (ft_strdup("RUSSIAN-FEDERATION"));
	if(!ft_strncmp(name, "sa", ft_strlen(name)))
		return (ft_strdup("SAUDI-ARABIA"));
	if(!ft_strncmp(name, "se", ft_strlen(name)))
		return (ft_strdup("SWEDEN"));
	if(!ft_strncmp(name, "sg", ft_strlen(name)))
		return (ft_strdup("SINGAPORE"));
	if(!ft_strncmp(name, "si", ft_strlen(name)))
		return (ft_strdup("SLOVENIA"));
	if(!ft_strncmp(name, "sk", ft_strlen(name)))
		return (ft_strdup("SLOVAKIA"));
	if(!ft_strncmp(name, "th", ft_strlen(name)))
		return (ft_strdup("THAILAND"));
	if(!ft_strncmp(name, "tr", ft_strlen(name)))
		return (ft_strdup("TURKEY"));
	if(!ft_strncmp(name, "tw", ft_strlen(name)))
		return (ft_strdup("TAIWAN"));
	if(!ft_strncmp(name, "ua", ft_strlen(name)))
		return (ft_strdup("UKRAINE"));
	if(!ft_strncmp(name, "us", ft_strlen(name)))
		return (ft_strdup("UNITED-STATES"));
	if(!ft_strncmp(name, "ve", ft_strlen(name)))
		return (ft_strdup("VENEZUELA"));
	if(!ft_strncmp(name, "za", ft_strlen(name)))
		return (ft_strdup("SOUTH-AFRICA"));
    return (name);
}