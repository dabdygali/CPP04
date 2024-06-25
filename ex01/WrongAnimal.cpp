/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdygal <dabdygal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:21:13 by dabdygal          #+#    #+#             */
/*   Updated: 2024/06/25 10:50:02 by dabdygal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

// Static members
const std::string	WrongAnimal::type = WRONGANIMAL_DFT_TYPE;
const std::string	WrongAnimal::sound = WRONGANIMAL_DFT_SOUND;

// Constructors
WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	src.getType();
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

// Destructors
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

// Operators
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	assign.getType();
	return *this;
}

// Getters / Setters
const std::string &	WrongAnimal::getType( void ) const
{
	return type;
}
const std::string &	WrongAnimal::getSound( void ) const
{
	return sound;
}

// Actions
void	WrongAnimal::makeSound( void ) const
{
	std::cout << getType() << ": " << getSound() << std::endl;
}
