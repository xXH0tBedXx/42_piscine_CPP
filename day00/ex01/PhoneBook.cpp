/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tasian <tasian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:22:30 by tasian            #+#    #+#             */
/*   Updated: 2022/01/20 16:02:58 by tasian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

	contact::contact()
	{	this->is_exist = false;	}

bool		contact::exist()
	{	return (is_exist);	}
int			contact::get_index(void)
	{	return (this->index);	}

std::string	contact::get_name(bool mode)
{
	if (mode)
	{	return (this->name.length() < 10 ? this->name : (this->name.substr(0, 9) + "."));	}
		return (this->name);
}

std::string	contact::get_surname(bool mode)
{
	if (mode)
	{	return (this->surname.length() < 10 ? this->surname : (this->surname.substr(0, 9) + "."));	}
		return (this->surname);
}

std::string	contact::get_nickname(bool mode)
{
	if (mode)
	{	return (this->nickname.length() < 10 ? this->nickname : (this->nickname.substr(0, 9) + "."));	}
		return (this->nickname);
}

std::string	contact::get_number(bool mode)
{
	if (mode)
	{	return (this->phone_number.length() < 10 ? this->phone_number : (this->phone_number.substr(0, 9) + "."));	}
		return (this->phone_number);
}

std::string	contact::get_secret(bool mode)
{
	if (mode)
	{	return (this->dankest_secret.length() < 10 ? this->dankest_secret : (this->dankest_secret.substr(0, 9) + "."));	}
		return (this->dankest_secret);
}

void		contact::add_contact(int index, std::string name, std::string surname, std::string nickname, std::string phone_number)
	{	this->is_exist = true; this->index = index; this->name = name; this->surname = surname; this->nickname = nickname; this->phone_number = phone_number;	}

void		contact::add_secret(std::string dankest_secret)
	{	this->dankest_secret = dankest_secret;	}