/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:21:13 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 11:07:11 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

// Static members
const std::string	WrongCat::type = WRONGCAT_DFT_TYPE;
const std::string	WrongCat::sound = WRONGCAT_DFT_SOUND;

// Constructors
WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &src) : WrongAnimal()
{
	src.getType();
	std::cout << "WrongCat copy constructor called" << std::endl;
}

// Destructors
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

// Operators
WrongCat & WrongCat::operator=(const WrongCat &assign)
{
	assign.getType();
	return *this;
}

// Getters / Setters
const std::string &	WrongCat::getType( void ) const
{
	return type;
}
const std::string &	WrongCat::getSound( void ) const
{
	return sound;
}

// Actions
void	WrongCat::makeSound( void ) const
{
	std::cout << getType() << ": " << getSound() << std::endl;
}
